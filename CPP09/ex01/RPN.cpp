#include "RPN.hpp"
#include <fstream>
RPN::RPN()
{

}

int RPN::setCalculus(std::string &expression)
{
    std::string token;
    std::ifstream iss(expression);
    int nbr1;
    int nbr2;
    char op;

    while (iss >> token)
    {
        if (isNumber(token))
        {
           stack.push(atoi(token.c_str()));
        }
        if ((op = isOperator(token)))
        {
            if (this->stack.size() < 2)
                std::cerr << "Invalid arguments" << std::endl;
        }
        nbr1 = stack.top();
        stack.pop();
        nbr2 = stack.top();
        stack.pop();
        int result = doOperation(nbr1, nbr2, op);
        stack.push(result);
    }
    return (result);
}

int RPN::doOperation(int a, int b, char op)
{
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    if (op == '/')
        return a / b;
    if (op == '*')
        return a * b;
    return (0);
}

const std::stack<int>& RPN:: getStack() const
{
    return stack;
}

int RPN::isNumber(std::string a)
{
    for (unsigned int i = 0; i != a.size(); i++)
    {
        if (!isdigit(a[i]))
            return 0;
    }
    return (1);
}

char RPN::isOperator (std::string a)
{
    for (unsigned int i = 0; i != a.size(); i++)
    {
        if (a[i] == '+')
            return ('+');
        if (a[i] == '*')
            return ('*');
        if (a[i] == '-')
            return ('-');
        if (a[i] == '/')
            return ('/');
    }
    return (0);
}

int RPN::getResult()
{
    return this->result;
}

int main(int argc, char **argv)
{
    RPN rpn;
    if (argc != 2)
    {
        cerr << "Invalid args" << std::endl;
        return -1;
    }
    std::cout << rpn.setCalculus((string)argv[1]) << std::endl;   
}