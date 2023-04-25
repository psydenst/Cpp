/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:45:54 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/24 21:57:54 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "phonebook.hpp"
#include "contacts.hpp"
#include <stdlib.h>

void add_contact(void)
{
    Contacts contact;
    std::string str;

    std::cout << "First name: ";
    std::getline(std::cin, str);
    contact.setFirstName(str);
    std::cout << "Last name: ";
    std::getline(std::cin, str);
    contact.setLastName(str);
    std::cout << "Nickname: ";
    std::getline(std::cin, str);
    contact.setNickName(str);
    std::cout << "Number: ";
    std::getline(std::cin, str);
    contact.setPhoneNumber(str);
    std::cout << "Secret: ";
    std::getline(std::cin, str);
    contact.setSecret(str);
    return; 
}

void    display_start_msg(void)
{
    std::cout << "\n\t\tWELCOME TO YOUR AWESOME PHONEBOOK\n\n";
    std::string str = "-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\nADD: Add a new contact in your phonebook\nSEARCH: Shows your contacts\nEXIT: quit phonebook\n\n-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\n";
    std::cout << str;
}

void display_instructions(void)
{
    std::string str = "-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\nADD: Add a new contact in your phonebook\nSEARCH: Shows your contacts\nEXIT: quit phonebook\n\n-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\n";
    std::cout << str;
}

void search(void)
{
    std::cout << "I'll search\n";
    
}

void    print_line(void)
{
    std::cout << "\n-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\n";
    
}


int main()
{
    std::string input;
    Phonebook phonebook;
    int index = 0;
    display_start_msg();
    while (1)
    {
        if (index >= 8)
            index = 0;
        std::getline(std::cin, input);
        if (input == "SEARCH")
        {
            phonebook.search(index);
            phonebook.display_contacts();
            print_line();
        }
        else if (input == "ADD")
        {
            phonebook.add_contact(index);
            phonebook.print_line();
            index++;
        }
        else if (input == "EXIT")    
            break;
        else
        {
            std::cout << "Oooops, seems you wrote an invalid command\n\n";
            phonebook.display_instructions(); 
        }
    }
    return (0);
}
