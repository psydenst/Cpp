
#include "Span.hpp"

# define PINK                   "\x1B[0;38;5;199m"
# define V_CYAN                 "\x1B[0;38;5;44m"
# define RESET                  "\x1B[0m"

int main()
{
    try
    {
        Span sp = Span(500);
        std::vector<int> len(500);
        std::cout << PINK << "Testing 500 numbers" << RESET << std::endl;
        for (int i = 0; i < 500; i++)
            len[i] = i;
        sp.addRange(len.begin(), len.end()); 
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        Span sp2 = Span(10000);
        std::vector<int> len2(10000);
        std::cout << PINK << "Testing 10000 numbers" << RESET << std::endl;
        for (int i2 = 0; i2 < 10000; i2++)
            len2[i2] = i2;
        sp2.addRange(len2.begin(), len2.end()); 
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "Out of range" << std::endl;
        return 0;
    }

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


