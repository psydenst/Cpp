#include "contacts.hpp"
#include "phonebook.hpp"
#include <stdio.h>
#include <stdlib.h>

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

int Phonebook::add_main(int index)
{
    this->add_contact(index);
    if (this->contacts[index].isEmpty() == 0)
    {
        this->print_line();
        index++;
    }
    else
        std::cout << "\n\nEmpty field :/ . Try another command:  \n\n";
    this->display_instructions();
    return (index);
}

void Phonebook::add_contact(int index)
{
    std::string str;

    std::cout << "First name: ";
    std::getline(std::cin, str);
    this->contacts[index].setFirstName(str);
    std::cout << "Last name: ";
    std::getline(std::cin, str);
    this->contacts[index].setLastName(str);
    std::cout << "Nickname: ";
    std::getline(std::cin, str);
    this->contacts[index].setNickName(str);
    std::cout << "Number: ";
    std::getline(std::cin, str);
    this->contacts[index].setPhoneNumber(str);
    std::cout << "Secret: ";
    std::getline(std::cin, str);
    this->contacts[index].setSecret(str);
}

void    Phonebook::display_start_msg(void)
{
    std::cout << "\n\t\tWELCOME TO YOUR AWESOME PHONEBOOK\n\n";
    Phonebook::display_instructions();
}

void Phonebook::display_instructions(void)
{
    std::string str = "-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\nADD: Add a new contact in your phonebook\nSEARCH: Shows your contacts\nEXIT: quit phonebook\n\n-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\n";
    std::cout << str;
}

void Phonebook::display_contactsinfo(int i) // proteger caso eu coloque um numero da lista
{   // que eu nao tenho adicionado ainda.
    if (this->contacts[i].isEmpty() == 0)
    {
        std::cout << "FIRST NAME: ";
        std::cout << this->contacts[i].getFirstName() << std::endl;
        std::cout << "LAST NAME: ";
        std::cout << this->contacts[i].getLastName() << std::endl;
        std::cout << "NICK NAME: ";
        std::cout << this->contacts[i].getNickName() << std::endl;
        std::cout << "PHONE NUMBER: ";
        std::cout << this->contacts[i].getPhoneNumber() << std::endl;
        std::cout << "DARKEST SECRET: ";
        std::cout << this->contacts[i].getSecret() << std::endl;
    }
    else
        std::cout << "Empty contact\n";
}

int strdigit(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void Phonebook::display_contacts(void)
{
    std::string str;
    std::cout << "ENTER CONTACT INDEX: ";
    std::getline(std::cin, str);
    std::cout << "\n";
    if (strdigit(str) && stoi(str) <= 8) // proteger no caso de estar vazio
        display_contactsinfo(stoi(str) - 1);
    else
        std::cout << "Wrong input :\\\n";
}

void Phonebook::search(int index)
{
    int counter = 0;
    while (counter <= index)
    {
        if (index > 7)
            break;
        if (this->contacts[counter].isEmpty() == 0)
            print_tableline(counter);
        counter++;
    }
}

void Phonebook::print_tableline(int index)
{
    std::cout << std::right << std::setw(10) << index + 1;
    std::cout << "|";
	std::cout << std::right << std::setw(10);
    std::cout << this->contacts[index].getFirstName();
    std::cout << "|";
	std::cout << std::right << std::setw(10);
    std::cout << this->contacts[index].getLastName();
    std::cout << "|";
	std::cout << std::right << std::setw(10) << this->contacts[index].getNickName();
    std::cout << "|";
	std::cout << std::endl;
}

void    Phonebook::print_line(void)
{
    std::cout << "\n-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.\n\n";
}
