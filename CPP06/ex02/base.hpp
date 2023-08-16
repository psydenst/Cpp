#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <stdlib.h>

class Base
{
    public: 
    virtual ~Base(void);
};

class A : public Base
{
    ~A();
};
class B : public Base
{
    ~B();
};
class C : public Base
{
    ~C();
};


#endif
