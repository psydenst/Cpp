// INCLUDE 42 HEADER

#include "easyfind.hpp"
#include "easyfind.tpp"
#include <vector>
#include <deque>
#include <list>
#include <iostream>

int main()
{
    std::cout << "VECTOR TEST" << std::endl;
    int elements[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::vector<int> v(elements, elements + sizeof(elements) / sizeof(int));
    std::cout << "Easyfind of 42: " << *(easyfind(v, 42)) << std::endl;
    std::cout << "Easyfind of 9: " << *(easyfind(v, 9)) << std::endl;
    std::cout << "Easyfind of 3: " << *(easyfind(v, 3)) << std::endl;
    std::cout << std::endl;

    std::cout << "DEQUE TEST" << std::endl;
    std::deque<int> d(elements, elements + sizeof(elements) / sizeof(int));
    std::cout << "Easyfind of 42: " << *(easyfind(d, 42)) << std::endl;
    std::cout << "Easyfind of 9: " << *(easyfind(d, 9)) << std::endl;
    std::cout << "Easyfind of 3: " << *(easyfind(d, 3)) << std::endl;  
    std::cout << std::endl;

    std::cout << "LIST TEST" << std::endl;
    std::list<int> l(elements, elements + sizeof(elements) / sizeof(int));
    std::cout << "Easyfind of 42: " << *(easyfind(d, 42)) << std::endl;
    std::cout << "Easyfind of 9: " << *(easyfind(d, 9)) << std::endl;
    std::cout << "Easyfind of 3: " << *(easyfind(d, 3)) << std::endl;    
 
    return (0);
}
