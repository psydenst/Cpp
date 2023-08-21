/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:51:34 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/21 19:40:45 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
Intern someRandomIntern;
AForm* rrf;
rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
std::cout << rrf->getTarget() << std::endl;
}


