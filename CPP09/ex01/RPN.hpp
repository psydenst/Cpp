#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <fstream>
#include <stack>
#include <iostream>

using namespace std;

class RPN
{
    private:
        std::stack<int> stack;
        int result; 

    public:
    RPN();
    int setCalculus(std::string &expression);
    const std::stack<int> &getStack() const;
    int getResult();
    int doOperation(int a, int b, char op);
    char isOperator (std::string a);
    int isNumber (std::string a);


};

#endif