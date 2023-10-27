#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    public: 
        BitcoinExchange();
        ~BitcoinExchange();
    //  BitcoinExchange(const &BitcoinExchange src);
        BitcoinExchange &operator = (const BitcoinExchange &right_hand_side);
        void getExchange();
        void fill_data(const char * path);
        char * file_path;
        int checkValue(double value);
        int checkLine(std::string line);

    private:
        std::map<std::string, double> database;
};

#endif
