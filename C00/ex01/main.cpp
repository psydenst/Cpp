/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:45:54 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/17 21:58:45 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "phonebook.hpp"

int main()
{
    Contacts contact;
    std::string str;

    std::cout << "First name: ";
    std::getline(std::cin, str);
 //   contact.setFirstName(str);
    std::cout << "Last name: ";
    std::getline(std::cin, str);
 //   contact.setLastName(str);
    std::cout << "Nickname: ";
    std::getline(std::cin, str);
//    contact.getNickname(std::cin, str);
    std::cout << "Number: ";
    std::getline(std::cin, str);
//  contact.getNumber(std::cin, str);
    std::cout << "Secret: ";
    std::getline(std::cin, str);
//    contact.getSecret(std::cin, str);
}