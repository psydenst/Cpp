/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:44:57 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/21 19:40:01 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed" << std::endl;
}

Intern::Intern(Intern &reference)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = reference;
}

AForm* Intern::createShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createRobotomyRequestForm(std::string target)
{

	return (new RobotomyRequestForm(target));

}

AForm* Intern::createPresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Intern &Intern::operator = (Intern const &right_hand_side)
{
	(void) right_hand_side;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string nameArray[3] = {"Robotomy Request", "Presidential Pardon", "Shrubbery Creation"};
	int i = 0;
	
	AForm *(Intern::*createForm[3])(std::string target) = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
	while (i < 3)
	{
	if (name == nameArray[i])	
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*createForm[i])(target);
		}
		i++;
	}
	std::cout << name << " is not valid form." << std::endl;
	return (NULL);
}

