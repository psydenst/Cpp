/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:26:49 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/18 22:05:36 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : gradeToSign(50), gradeToExecute(50)
{
	std::cout << "Default Form constructor called" << std::endl;
	this->isSigned = false;
}

Form::Form(int toSign, int toExecute, std::string name) : name(name), gradeToSign(toSign), gradeToExecute(toExecute)
{
	std::cout << "Default Form constructor called, with gradeToSign " << toSign
	<< " and gradeToExecute " << toExecute << std::endl;
	this->isSigned = false;
}

Form::Form(Form const &instance) : name(instance.getName()), gradeToSign(instance.getGradeToSign()), gradeToExecute(instance.getGradeToExecute()) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Form::~Form()
{
	std::cout << "Default destructor called" << std::endl;
}

std::string Form::getName() const
{
	return (this->name);
}

int	Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
	return(this->gradeToExecute);
}

int	Form::getIsSigned() const
{
	return (this->isSigned);
}

std::ostream &operator <<(std::ostream &outputFile, Form const &i)
{
	outputFile << i.getName() << "gradetoSign is " << i.getGradeToSign() <<
	" and gradeToExecute is" << i.getGradeToExecute() << ". Is signed: ";
	if (i.getIsSigned())
			outputFile << "Yes" << std::endl;
	else
			outputFile << "No" << std::endl;
	return (outputFile);
}

void Form::beSigned(Bureaucrat const b)
{
	try
	{
		if (b.getGrade() > this->getGradeToSign())
			throw Form::GradeTooLowException();
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << e.what() <<std::endl;
	}
	this->isSigned = true; 
	return;
}

Form    &Form::operator=(Form const &right_hand_side)
{
        this->isSigned = right_hand_side.getIsSigned();
        return (*this);
}


