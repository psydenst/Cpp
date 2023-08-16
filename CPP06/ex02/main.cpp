#include "base.hpp"

Base *generate(void)
{
    Base *class_pointer;
    int random_number;

    std::cout << "------- generating class -------" << std::endl;
    std::srand((unsigned int)time(NULL));
    random_number = rand() % 100;
    if (random_number < 33)
    {
        class_pointer = new A();
        std::cout << "class A generated" << std::endl;
    }
    else if (random_number < 66)
    {
        class_pointer = new B();
        std::cout << "class B generated" << std::endl;
    }
    else
    {
        class_pointer = new C();
    }
    return class_pointer;
}

void identify(Base *p)
{
    std::cout << "----- identifying class by pointer -----" << std::endl;
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;

}

