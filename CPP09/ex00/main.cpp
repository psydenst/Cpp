#include <iostream>
#include "BitcoinExchange.hpp"

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <data_file>" << std::endl;
        return 1; // Return an error code to indicate incorrect usage.
    }
    BitcoinExchange bitcoinExchange;
    bitcoinExchange.file_path = argv[1];
    bitcoinExchange.fill_data("data.csv");

    return 0;
}
