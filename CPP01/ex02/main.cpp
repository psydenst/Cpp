/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:46:42 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/27 19:05:43 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brains;
    std::string *stringPTR = &brains;
    std::string& stringREF = brains;

    brains = "HI THIS IS BRAIN";

    // PRINT ADD OF STRING VARIABLE
    std::cout << &brains << std::endl;
    // ADD OF STRINGPTR
    std::cout << stringPTR << std::endl;
    // ADD OF STRINGREF
    std::cout << &stringREF << std::endl;
    // VALUE OF STRING VARIABLE
    std::cout << brains << std::endl;    
    // VALUE OF STRINGPTR
    std::cout << *stringPTR << std::endl;
    // VALUE OF STRINGREF
    std::cout << stringREF << std::endl;
}