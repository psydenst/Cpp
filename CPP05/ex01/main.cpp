/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:37:25 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/02 17:33:50 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
		Form form1(150, 150, "150");
		Form form2(130, 130, "130");
		Form form3(1, 1, "UNO");
		int variable;
		std::cout << "Enter a grade: ";
		std::cin >> variable;
		Bureaucrat One(variable, "One");

		Bureaucrat Two(149, "Two");
		Two.incrementGrade();
		Two.incrementGrade();

		Bureaucrat Three(2, "Three");
		Three.decrementGrade();
		Three.signForm(form3);
		Three.decrementGrade();
		
}
