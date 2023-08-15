// INCLUDE HEADER

#include "ScalarConverter.hpp"

int exceptions(std::string str)
{
    if(str == "nan" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return (1);
    }
    if (str == "+inf" || str == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return (1);
    }
    if (str == "-inf" || str == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return (1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./convert number" << std::endl;
        return (1);
    }
    if(exceptions(argv[1]) == 1)
        return (0);
    ScalarConverter::toChar(argv[1]);
    ScalarConverter::toInt(argv[1]);
    std::cout.precision(1);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    ScalarConverter::toFloat(argv[1]);
    ScalarConverter::toDouble(argv[1]);
    return (0);
}

