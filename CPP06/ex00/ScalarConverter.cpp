// INCLUDE 42 HEADER

#include "ScalarConverter.hpp"
#include <sstream>
#include <string>

int ScalarConverter::toInt(std::string a)
{
    int value = 0;
    try
    {
        if (a.empty())
            throw (NotValidException());
        for (long unsigned int i = 0; i < a.size(); ++i)
        {   
            if (!isdigit(a[i]) && a[i] != '+' && a[i] != '-' && a[i] != 'f' && a[i] != '.')
                throw (NotValidException());
        }
        value = std::atoi(a.c_str());
    
    }
    catch (NotValidException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (-1);
    }
    std::cout << "int: " << value << std::endl;
    return (value);
}

double ScalarConverter::toDouble(std::string a)
{
    double value = 0;
    try
    {
        if (a.empty())
            throw (NotValidException());
        for (long unsigned int i = 0; i < a.size(); ++i)
        {   
            if (!isdigit(a[i]) && a[i] != '.' && a[i] != '+' && a[i] != '-' && a[i] != 'f')
                throw (NotValidException());
        }
        value = std::strtod(a.c_str(), NULL);
    }
    catch (NotValidException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (-1);
    }
    std::cout << "double: " << value << std::endl;
    return (value);
}

float ScalarConverter::toFloat(std::string a)
{
    float value = 0;
    try
    {
        if (a.empty())
            throw (NotValidException());
        for (long unsigned int i = 0; i < a.size(); ++i)
        {   
            if (!isdigit(a[i]) && a[i] != '.' &&
                    a[i] != '+' && a[i] != '-' && a[i] != 'f')
                throw (NotValidException());
        }
        value = std::atof(a.c_str());
    }
    catch (NotValidException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (-1);
    }
    std::cout << "float: " << value << "f" << std::endl;
    return (value);
}

char ScalarConverter::toChar(std::string a)
{
    int value;
    try
    {
        if (a.empty())
            throw (NotValidException());
        for (long unsigned int i = 0; i < a.size(); ++i)
        {   
            if (!isdigit(a[i]) && a[i] != '.' &&
                    a[i] != '+' && a[i] != '-' && a[i] != 'f')
                throw (NotValidException());
        }
        value = std::atoi(a.c_str()); 
        if (value < 32 || value > 126)
            throw (NonDisplayable());
    }    
    catch (NotValidException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return ('\0');
    }
    catch (NonDisplayable &e)
    {
        std::cout << e.what() << std::endl;
        return ('\0');
    }
    std::cout << "char: " << (char)value << std::endl;
    return (value);
}


