#include "base.hpp"

Base::~Base()
{
    std::cout << "Base destructor called" << std::endl;
}

A::~A()
{
    std::cout << "A destructor called" << std::endl;
}

B::~B()
{
    std::cout << "B destructor called" << std::endl;
}

C::~C()
{
    std::cout << "C destructor called" << std::endl;
}

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

void identify(Base& p)
{
    std::cout << "------- identifying class by reference ------" << std::endl; 
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << " Not A" << std::endl;
    }
    try
    {
        dynamic_cast<B &>(p);
        std::cout << "B" << std::endl; 
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << " Not B" << std::endl;
    }
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << " Not C" << std::endl;
    }
}

int main(void)
{
    Base *random_class[5];

    int i = -1;
    while (++i < 5)
    {
        random_class[i] = generate();
        usleep(1500000);
    }
    Base &reference0 = *random_class[0];
    Base &reference1 = *random_class[1];
    Base &reference2 = *random_class[2];
    Base &reference3 = *random_class[3];
    Base &reference4 = *random_class[4];
    identify(random_class[0]);
    identify(reference0);
    identify(random_class[1]);
    identify(reference1);
    identify(random_class[2]);
    identify(reference2);
    identify(random_class[3]);
    identify(reference3);
    identify(random_class[4]);
    identify(reference4);
    while (i--)
        delete random_class[i];
}


