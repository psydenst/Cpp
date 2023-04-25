/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:45:54 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/25 17:26:20 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "phonebook.hpp"
#include "contacts.hpp"
#include <stdlib.h>

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
            phonebook.print_line();
        }
        else if (input == "ADD")
        {
            index = phonebook.add_main(index);
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
