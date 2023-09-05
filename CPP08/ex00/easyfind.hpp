// INCLUDE 42 HEADER

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class NoOccurrence : public std::exception
{
    public:
    virtual const char * what() const throw()
    {
        return ("No occurrence :/");
    }
};

template <typename T>
typename T::iterator easyfind(T& array, int to_find);

#endif
