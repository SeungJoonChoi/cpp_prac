#include "Span.hpp"
#include <iostream>

int main()
{
    std::srand(std::time(NULL));

    try
    {
        Span sp(10000);

        std::vector<int> v;
        for(int i = 0; i < 10000; ++i)
            v.push_back(std::rand());
        sp.addRange(v.begin(), v.end());

        size_t i;
        for(i = 0; i < 10000; ++i)
        {
            if(sp.getV()[i] != v[i])
                std::cout << "Not same!!!" << std::endl;
        }
        if(i == v.size())
            std::cout << "It's same ^^!" << std::endl;

        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}