/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:59:15 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/02 18:03:08 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "limits.h"

int main()
{
		int variable;
		std::cout << "Enter a grade: ";
		std::cin >> variable;
		Bureaucrat One(variable, "One");

		Bureaucrat Two(INT_MIN, "Two");
		Two.incrementGrade();
		Two.incrementGrade();
		std::cout << One.getGrade() << std::endl;
		Bureaucrat Three(INT_MAX, "Three");
		Three.decrementGrade();
		Three.decrementGrade();
}
