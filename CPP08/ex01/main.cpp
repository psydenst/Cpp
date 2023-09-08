// INCLUDE 42 HEADER

#include "Span.hpp"


int main()
{

    Span sp = Span(10000);
    try
    {
        for (int i = 0; i < 10000; i++)
            sp.addNumber(i);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Out of range" << std::endl;
        return 0;
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

/*
int main() 
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0; 
}
*/


