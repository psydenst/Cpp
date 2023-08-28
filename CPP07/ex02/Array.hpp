// INCLUDE 42 HEADER

#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>
#include <cstddef>
#include <ostream>

template<typename T> class Array
{   
    private: 
    unsigned int _n;
    T   *_ptr;
    public:
    Array();
    Array(unsigned int n);
    Array(Array &instance);
    ~Array();
    Array &operator = (Array const &rs);
    T &operator [] (int index);
    // Getters
    T get_ptr();
    // Member functions
    unsigned int size();
};  

#include "Array.tpp"

#endif
