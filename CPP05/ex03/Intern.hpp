/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:45:04 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/21 19:21:40 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

class Intern
{	
	private:
	AForm* createShrubberyCreationForm(std::string target);
	AForm* createRobotomyRequestForm(std::string target);
	AForm *createPresidentialPardonForm(std::string target);
	
	public:
	Intern();
	Intern(Intern &instance);
	~Intern();
	Intern &operator =(Intern const &right_hand_side);
	AForm* makeForm(std::string name, std::string target);
	AForm *createForm(std::string target);

};

#endif
