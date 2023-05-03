/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:18:17 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/03 20:59:31 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string replace(std::string str1, std::string myString, std::string str2, size_t found)
{
    std::string cpy = myString.substr(0, found);
    std::string rest = myString.substr(found + str1.length());
    std::stringstream ss;
    ss << cpy << str2 << rest;
    std::string result = ss.str();
    std::cout << result;
    return (result);
}

int main(int argc, char **argv) 
{
    
    std::string str1 = "Hello";
    std::string str2 = "Hello meu mano";
    std::ifstream file("file.txt");

    std::string myString((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    
    std::cout << myString << std::endl;

    std::size_t found = myString.find(str1);

    if (found != std::string::npos) 
    {
        std::string ret = replace(str1, myString, str2, found);
    } 
    else 
    {
        std::cout << "The string '" << str1 << "' was not found in '" << myString << "'." << std::endl;
    }

}
