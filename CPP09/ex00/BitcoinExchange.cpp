#include <iostream>
#include "BitcoinExchange.hpp"
#include <cstdlib>

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{


}


void BitcoinExchange::getExchange()
{
// 

}


// checkLine

// checkValue

void BitcoinExchange::fill_data(const char *path)
{
    std::ifstream data(path);
    std::string key;
    float value;
    std::string line;
    const char *joker;
    while (std::getline(data, line))
    {
        std::cout << "line is: " << line << std::endl;
        int i = 0;
        while (isdigit(line[i]) || line[i] == '-')
            i++;
        key = line.substr(0, i);
        i++;
        joker = line.c_str() + i; // No need to use a separate substring.
        char *endptr;
        value = strtod(joker, &endptr);
        std::cout << "value is: " << value << std::endl;
        if (*endptr != '\0') {
            // Check if there was an error during conversion.
            std::cerr << "Error converting value on line: " << line << std::endl;
        } else {
            this->database.insert(std::pair<std::string, double>(key, value));
        }
    }
}




