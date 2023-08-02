/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:26:49 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/02 17:33:26 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form()
{
	std::cout << "Default constructor called, with default gradeToSign -50 and gradeToExecute -50" << std::endl;
	this->gradeToSign = -50;
	this->gradeToExecute = -50;
}

Form::Form(int toSign, int toExecute, std::string name) : name(name)
{
	std::cout << "Default constructor called, with gradeToSign " << toSign
	<< " and gradeToExecute" << toExecute << std::endl;
	this->gradeToSign = toSign;
	this->gradeToExecute = toExecute;
}

Form::Form(Form const &instance)
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

int Form::isSign()
{
	if (this->gradeToSign == -50  && this->gradeToExecute == -50)
			this->isSigned = false;
	else
			this->isSigned = true;
	return (0);
}


void Form::beSigned(Bureaucrat const b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw Form::GradeTooLowException();
	else
			this->isSigned = true; 
	return;
}

