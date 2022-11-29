#include "identify.hpp"

Base * generate(void)
{
    Base* ret;
    int n;

    std::srand(static_cast<unsigned int>(std::time(0)));
    n = std::rand() % 3;

    switch(n)
    {
    case 0:
        ret = new A;
        break;
    case 1:
        ret = new B;
        break;
    case 2:
        ret = new C;
        break;
    }

    return ret;
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p) != nullptr)
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }
}