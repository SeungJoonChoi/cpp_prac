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
        std::cout << "ptr : A" << std::endl;
    else if(dynamic_cast<B*>(p) != nullptr)
        std::cout << "ptr : B" << std::endl;
    else
        std::cout << "ptr : C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "ref : A" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "ref : B" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "ref : C" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }
}