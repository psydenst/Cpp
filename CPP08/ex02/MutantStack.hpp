// INCLUDE 42 HEADER

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
// #include <deque>
#include <iterator>

template<typename T>
class  MutantStack : public std::stack<T>
{
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    iterator begin()
    {
        return this->c.begin;
    }
    iterator end()
    {
        return this->c.end();
    }

    private:
    MutantStack() : std::stack<T>() ;
    MutantStack(const &T element) : std::stack<T>()
    ~MutantStack();

};

#endif