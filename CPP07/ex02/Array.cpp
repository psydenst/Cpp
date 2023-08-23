// INCLUDE 42 HEADER

#include "Array.hpp"

# define PINK                   "\x1B[0;38;5;199m"
# define V_CYAN                 "\x1B[0;38;5;44m"
# define RESET                  "\x1B[0m"

template class Array<int>;

template <typename T>
Array<T>::Array() : _n(0), _ptr(NULL) 
{
    std::cout << PINK << "Empty array criated" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n), _ptr( new T[n])
{
    std::cout << PINK << "Array with " << n << " elements criated" << RESET << std::endl;
}
template <typename T>
Array<T>::Array(Array &instance) : _n(instance._n)
{
    std::cout << PINK << "Copy constructor called" << RESET << std::endl; 
    this->_ptr = new T[instance._n];
    for (unsigned int i = 0; i < this->_n; i++)
        this->_ptr[i] = instance._ptr[i];
}
template <typename T>
Array<T> & Array<T>::operator=(const Array &rs)
{
    if (this != &rs) {
        delete[] _ptr;
        _n = rs._n;
        _ptr = new T[_n];
        for (unsigned int i = 0; i < _n; i++)
            _ptr[i] = rs._ptr[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    if (this->_n != 0)
    {
            delete[] _ptr;
    }
    std::cout << PINK << "Destructor called GOOD BYEEEE" << RESET << std::endl;
}


