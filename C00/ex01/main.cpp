/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:45:54 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/25 19:05:40 by psydenst         ###   ########.fr       */
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
    std::cout << "\033[35m\n\t\tWELCOME TO YOUR AWESOME PHONEBOOK\n\n\033[0m";
    std::string str = "\033[35m.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\nADD: Add a new contact in your phonebook\nSEARCH: Shows your contacts\nEXIT: quit phonebook\n\n-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\n\033[0m";
    std::cout << str;
}

int main()
{
    std::string input;
    Phonebook phonebook;
    int index = 0;
    int contacts = 0;
    display_start_msg();
    while (1)
    {
        if (index >= 8)
            index = 0;
        std::getline(std::cin, input);
        if (input == "SEARCH")
        {
            phonebook.search(contacts);
            phonebook.display_contacts();
            phonebook.print_line();
            phonebook.display_instructions();
        }
        else if (input == "ADD")
        {
            index = phonebook.add_main(index);
            if (contacts != 8)
                contacts++;
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
