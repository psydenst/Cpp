// INCLUDE HEADER

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./convert number" << std::endl;
        return (1);
    }

    ScalarConverter::toChar(argv[1]);
    ScalarConverter::toInt(argv[1]);
    std::cout.precision(1);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    ScalarConverter::toFloat(argv[1]);
    ScalarConverter::toDouble(argv[1]);
    return (0);
}

