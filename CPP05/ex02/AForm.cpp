/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:51:55 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/21 16:52:00 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


AForm::AForm(std::string name, int toSign, int toExecute) : name(name), gradeToSign(toSign), gradeToExecute(toExecute)
{
        std::cout << "Default Form constructor called, with gradeToSign " << toSign
        << " and gradeToExecute " << toExecute << std::endl;
        this->isSigned = false;
}

bool		AForm::execute(Bureaucrat const &executor) const
{
	try 
	{
        	if (!this->isSigned)
        	{
	            throw AForm::NoSignatureException();
	}

        if (executor.getGrade() > this->getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
	}
        // If the form is signed and the executor's grade is acceptable, execute the form
        return true;
	} 
	catch (const AForm::NoSignatureException &e) 
	{
        std::cerr << "Exception: " << e.what() << std::endl;
        return false;
    } 
	catch (const AForm::GradeTooLowException &e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
        return false;
    }
	catch (const std::exception &e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
        return false;
    }
}

AForm::AForm(AForm const &instance) : name(instance.getName()), gradeToSign(instance.getGradeToSign()), gradeToExecute(instance.getGradeToExecute())
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

AForm::~AForm()
{
	std::cout << "Default destructor called" << std::endl;
}

std::string AForm::getName() const
{
	return (this->name);
}

int	AForm::getGradeToSign() const
{
	return (this->gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return(this->gradeToExecute);
}

int	AForm::getIsSigned() const
{
	return (this->isSigned);
}

std::ostream &operator <<(std::ostream &outputFile, AForm const &i)
{
	outputFile << i.getName() << "gradetoSign is " << i.getGradeToSign() <<
	" and gradeToExecute is " << i.getGradeToExecute() << ". Is signed: ";
	if (i.getIsSigned())
			outputFile << "Yes" << std::endl;
	else
			outputFile << "No" << std::endl;
	return (outputFile);
}


void AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw AForm::GradeTooLowException();
	else
			this->isSigned = true; 
	return;
}

void	AForm::setTarget(std::string target)
{
	this->target = target;
}

std::string AForm::getTarget() const
{
	return (this->target);
}

void	AForm::setSign(bool i)
{
	this->isSigned = i;
}

AForm    &AForm::operator=(AForm const &right_hand_side)
{
        this->isSigned = right_hand_side.getIsSigned();
        return (*this);
}

