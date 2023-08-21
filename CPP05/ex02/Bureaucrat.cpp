/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:57:44 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/21 19:15:16 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
    std::cout << "Bureaucrat created" << std::endl;
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &instance)
{
    *this = instance;
    std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

void Bureaucrat::incrementGrade()
{
    this->grade--;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->grade > 150)
			throw Bureaucrat::GradeTooLowException();
    }
 	catch(GradeTooHighException &e)
    {
		std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade()
{
    this->grade++;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->grade > 150)
			throw Bureaucrat::GradeTooLowException();
    }
    catch(GradeTooLowException &e)
    {
    	std::cerr << e.what() << '\n';
	}
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &right_hand_side)
{
	this->grade = right_hand_side.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &i)
{
	outputFile << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (outputFile);
}

void    Bureaucrat::signForm(AForm &form) const
{
    if (form.getGradeToSign() == -50)
    {
        try
        {
            form.beSigned(*this);
        }
        catch (GradeTooLowException &e)
        {
                std::cerr << this->getName() << "couldn't sign "
                << form.getName() << " because" << e.what()
                << std::endl;
        }
    }
	std:: cout << this->getName() << " couldn't sign " << form.getName()
	<< " because he doens't has the grade" << std::endl;
}

void Bureaucrat::executeForm(AForm const &form)
{
	try 
	{
       		form.execute(*this);
	}
	catch (const AForm::NoSignatureException &e)
	{
        	std::cerr << this->name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		return ;
	} 
	catch (const AForm::GradeTooLowException &e)
	{
        	std::cerr << this->name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		return ;
	} 
	catch (const std::exception &e)
	{
        	std::cerr << this->name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " executes " << form.getName() << std::endl << std::endl;
}

