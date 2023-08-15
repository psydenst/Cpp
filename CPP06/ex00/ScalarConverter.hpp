// INCLUDE 42 HEADER

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <stdlib.h>     /* strtod */

class ScalarConverter
{
    
    public:

    class NotValidException
    {
        public:
        const char * what() const throw()
        {
            return ("Not valid argument");
        }
    };

    class NonDisplayable
    {
        public:
        const char * what() const throw()
        {
            return ("Non displayable");
        }
    };
    
    static int toInt(std::string a);
    static double toDouble(std::string a);
    static float toFloat(std::string a);
    static char toChar(std::string a);
};

#endif
