// INCLUDE 42 HEADER

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>

template <typename T, typename Container=std::deque<T> >
class  MutantStack : public std::stack<T, Container>
{

    private:

    public:
    MutantStack() {};
    MutantStack(MutantStack const &element) : std::stack<T, Container>(element){}
    ~MutantStack(){};
    MutantStack &operator=(MutantStack const &right_hand_side)
    {
        std::stack<T, Container>::operator=(right_hand_side);
        return *this;
    }
    typedef typename Container::iterator iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    iterator begin(){return this->c.begin();}
    iterator end(){return this->c.end();}
    reverse_iterator rbegin() {return this->c.rbegin();}
    reverse_iterator rend() {return this->c.rend();}
};

#endif
