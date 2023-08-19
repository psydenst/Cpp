/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:37:25 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/18 22:02:23 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
		Form form1(150, 150, "150");
		std::cout << "\n";
		Form form2(130, 130, "130");
		std::cout << "\n";
		Form form3(1, 1, "UNO");
		std::cout << "\n";
		std::cout << "\n";

		std::cout << "\n";
		std::cout << "\n";
		Bureaucrat Two(149, "Two");
		std::cout << "\n";
		Two.incrementGrade();
		std::cout << "\n";
		Two.incrementGrade();

		Bureaucrat Three(2, "Three");
		std::cout << "\n";
		Three.decrementGrade();
		std::cout << "\n";
		Two.signForm(form3);
		std::cout << "\n";
		Three.decrementGrade();
		form1.beSigned(Three);	
}
