#include <iostream>
#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <map>

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


int BitcoinExchange::checkValue(double value)
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number" << std::endl;
		return (1);
	}
	else if (value > 1000)
	{
		std::cerr << "Error: too large a number" << std::endl;
		return (1);
	}
	else
		return (0);
}

int	BitcoinExchange::checkLine(std::string line)
{
	if (line.size() < 14 || line.find('|') == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return (1);
	}
	return (0);
}

void BitcoinExchange::fill_data(const char *path)
{
    std::ifstream data(path);
    std::string key;
    float value;
    std::string line;
    const char *joker;

    while (std::getline(data, line))
    {
      //  std::cout << "line is: " << line << std::endl;
        int i = 0;
        while (isdigit(line[i]) || line[i] == '-')
            i++;
        key = line.substr(0, i);
        i++;
        joker = line.c_str() + i; // No need to use a separate substring.
        char *endptr;
        value = strtod(joker, &endptr);
       // std::cout << "value is: " << value << std::endl;
        if (*endptr != '\0') {
            // Check if there was an error during conversion.
            break;
            std::cerr << "Error converting value on line: " << line << std::endl;
        } else {
            this->database.insert(std::pair<std::string, double>(key, value));
        }
    }
}




