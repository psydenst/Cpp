#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
    private:
    std::vector<int> numbers;
    unsigned int N;

    public:
    Span();
    Span(unsigned int n);
    Span(Span const &instance);
    ~Span();
    Span &operator=(Span const &right_hand_side);
    void addNumber(int nbr);
    int shortestSpan();
    int longestSpan();

};

#endif
