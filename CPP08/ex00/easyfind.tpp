
#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& array, int to_find)
{
    try
    {
        for (typename T::iterator it = array.begin(); it != array.end(); ++it)
        {
            if (*it == to_find)
             return it;
        }
        throw (NoOccurrence());
    }
    catch(const NoOccurrence &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (array.end());
}
