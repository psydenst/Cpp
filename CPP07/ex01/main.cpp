#include <iostream>

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

    std::cout << "Int array elements: ";
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), printElement<int>);
    std::cout << std::endl << "Double array: ";
    iter(intArray, sizeof(doubleArray) / sizeof(doubleArray[0]), printElement<double>);
    std::cout << std::endl;
}


