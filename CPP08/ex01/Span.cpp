// INCLUDE HEADER

#include "Span.hpp"

Span::Span(const unsigned int n): N(n)
{
    this->numbers.reserve(N);
}

Span::Span(Span const &instance)
{
    this->numbers = instance.numbers;
    this->N = instance.N;
}

Span::Span()
{
}

Span::~Span()
{
}

void    Span::addNumber(int nbr)
{
    try
    {
        if (this->numbers.size() > this->N)
        throw (std::exception());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    this->numbers.push_back(nbr);
    return ;
}

int Span::shortestSpan()
{
    int ret2;
    int ret = numbers[0] - numbers[1];
    if (ret < 0)
        ret = ret * -1;
    for (size_t i = 1; i < numbers.size(); i++) 
    {
        ret2 = numbers[i] - numbers[i + 1];
        if (ret2 < 0)
            ret2 = ret2 * -1;
        if (ret2 < ret)
            ret = ret2;
    }
    return (ret);
}

int Span::longestSpan()
{
    return (1);
}
