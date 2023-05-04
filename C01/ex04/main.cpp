/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:18:17 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/03 22:49:43 by psydenst         ###   ########.fr       */
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

int openFile(char *fileName, std::ifstream &inputFile)
{
    inputFile.open(fileName);
    if(!inputFile)
    {
        std::cerr << "Error opening the file" << std::endl;
        return (0);
    }
    return (1);
}

int error(int argc, char *fileName, std::ifstream *inputFile)
{
    if (argc != 4 || !openFile(fileName, *inputFile))
    {
        std::cout << "Usage: ./replace filename str1 str2" << std::endl;
        return (1);
    }
    return (0);
}

std::string newString(char *str1, char *str2, std::ifstream inputFile)
{
    std::string myString((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());

    std::cout << myString << std::endl;

    std::size_t found = myString.find(str1);

    if (found != std::string::npos) 
    {
        return (replace(str1, myString, str2, found));
    } 
    else 
    {
        std::cout << "The string '" << str1 << "' was not found in '" << myString << "'." << std::endl;
    }
    return (NULL);
}

int main(int argc, char **argv) 
{
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string ret;

    if (error(argc, argv[1], &inputFile))
        return (0);
    ret = newString(argv[2], argv[3], inputFile);
  //  writeFile(argv, &outputFile, ret);
    return (0);
}
