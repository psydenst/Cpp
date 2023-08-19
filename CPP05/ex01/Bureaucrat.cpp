/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:22:10 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/18 21:57:50 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
    std::cout << "Bureaucrat created" << std::endl;
    this->grade = grade;
    try
    {
        if (this->grade < 1)
                        throw Bureaucrat::GradeTooHighException();
                else if (this->grade > 150)
                        throw Bureaucrat::GradeTooLowException();
    }
    catch(const GradeTooHighException &e)
    {
                std::cerr << e.what() << '\n';
    }
    catch (const GradeTooLowException &e)
    {
                std::cerr << e.what() << '\n';
    }
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

void    Bureaucrat::signForm(Form form) const
{

	std::cout << this->getName() << " signs " << form.getName() << std::endl;
	return ;
}

