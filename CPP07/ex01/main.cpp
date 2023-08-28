#include <iostream>
#include "iter.hpp"

# define PINK                   "\x1B[0;38;5;199m"
# define V_CYAN                 "\x1B[0;38;5;44m"
# define RESET                  "\x1B[0m"

template <typename T, typename Func>

void iter(T *array, size_t length, Func func)
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

template <typename T>
void printElement(const T &element)
{
        std::cout << element << " ";
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::string stringArray[] = {"hello", "beautiful", "and", "bright", "world"}; 

    std::cout << PINK << "------ INT ARRAY ------" << RESET << std::endl;
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), printElement<int>);
    std::cout << std::endl;
    std::cout << PINK << "------ DOUBLE ARRAY -----" << RESET << std::endl;
    iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), printElement<double>);
    std::cout << std::endl;
    std::cout << PINK << "------ CHAR ARRAY ------" << RESET << std::endl;
    iter(charArray, sizeof(charArray) / sizeof(charArray[0]), printElement<char>);
    std::cout << std::endl;
    std::cout << PINK << "------ STRING ARRAY ------" << RESET << std::endl;
    iter(stringArray, sizeof(stringArray) / sizeof(stringArray[0]), printElement<std::string>);
    std::cout << std::endl;   
}


