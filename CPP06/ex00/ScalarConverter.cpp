// INCLUDE 42 HEADER

#include "ScalarConverter.hpp"
#include <sstream>
#include <string>

/*
static int s_toi(std::string s) 
{
    long int i;
    std::istringstream(s) >> i;
    if (i > INT_MAX || i < INT_MIN)
    {
        return (-1);
    }
    return i;
} */


int ScalarConverter::toInt(std::string a)
{
    int value = 0;
    try
    {
        value = std::atoi(a.c_str());
    }
    catch (...)
    {
        std::cerr << "Not a valid argument" << std::endl;
        return (-1);
    }
    return (value);
}

double ScalarConverter::toDouble(std::string a)
{
    double value = 0;
    try
    {
        value = stod(a);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Not a valid argument" << std::endl;
        return (-1);
    }
    catch (std::out_of_range &e)
    {
        std::cerr << "Out of range :/" << std::endl;
        return (-1);
    }
    return (value);
}

float ScalarConverter::toFloat(std::string a)
{
   float value = 0;
    try
    {
        value = stof(a);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Not a valid argument" << std::endl;
        return (-1);  
    }
    catch (std::out_of_range &e)
    {
        std::cerr << "Out of range :/" << std::endl;
        return (-1);
    }
    return (value);
}

char ScalarConverter::toChar(std::string a)
{
    char value;
    try
    {

        value = a[0];
        if (a.length() > 1)
        {
            throw std::invalid_argument("Invalid argument");
        }
    }    
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Not a valid argument" << std::endl;
        return ('\0');
    }
    return (value);
}
