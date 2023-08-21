/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:51:34 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/21 19:11:11 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
/*		int variable;
		std::cout << "Enter a grade: ";
		std::cin >> variable;
		Bureaucrat One(variable);
		PresidentialPardonForm form("form");
		Bureaucrat Two(149);
		Two.incrementGrade();
		Two.incrementGrade();

		Bureaucrat Three(2);
		Three.decrementGrade();
		Three.decrementGrade();

		PresidentialPardonForm President("President");
		RobotomyRequestForm Robot("a");
		ShrubberyCreationForm Schub("psy");

		Robot.execute(Three);
		President.execute(Two);
		Schub.execute(One);
		Three.executeForm(form);
*/
/*
		Bureaucrat Test(1, "João");
		ShrubberyCreationForm Schub("Schub");
		PresidentialPardonForm Pres("Pres");
		RobotomyRequestForm Robot("Robot");
		
		Schub.beSigned(Test);
		Test.executeForm(Schub);
		
		Test.executeForm(Pres); // Should prompt error exception
		Pres.beSigned(Test);
		Test.executeForm(Pres);

		Robot.beSigned(Test);
		Test.executeForm(Robot);
*/
		
		Bureaucrat Low(150, "Nilson");
		Bureaucrat Mid(100, "Geraldo");
		ShrubberyCreationForm Shrub("Shrub");
		PresidentialPardonForm Pres("pres2");
		RobotomyRequestForm Robot("Robot");
		Low.executeForm(Pres);		
		Robot.beSigned(Mid);
		Low.executeForm(Shrub);
		Low.executeForm(Robot);

		Bureaucrat High(1, "Nilson");
		ShrubberyCreationForm Shrub2("Shrub");
		PresidentialPardonForm Pres2("pres2");
		RobotomyRequestForm Robot2("Robot");
		Shrub2.beSigned(High);
		Pres2.beSigned(High);
		Robot2.beSigned(High);
		High.executeForm(Pres2);		
		High.executeForm(Shrub2);
		High.executeForm(Robot2);

}
