/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:22:10 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/02 17:32:41 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(int grade, std::string const name): name(name), grade(grade)
{
	std::cout << "Bureaucrat created" << std::endl;
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
    this->grade++;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooLowException();
		if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
    }
 	catch(GradeTooHighException e)
    {
		std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade()
{
    this->grade--;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooLowException();
		if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
    }
    catch(GradeTooLowException e)
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

void    Bureaucrat::signForm(Form form) const
{
	if (form.getGradeToSign() == -50)
	{
		try
	        {
	            form.beSigned(*this);
	        }
	        catch (GradeTooLowException e)
	        {
                std::cerr << this->getName() << "couldn't sign "
                << form.getName() << " because" << e.what()
                << std::endl;
			return ;
		}
	}
	std::cout << this->getName() << " signs " << form.getName() << std::endl;
	return ;
}
