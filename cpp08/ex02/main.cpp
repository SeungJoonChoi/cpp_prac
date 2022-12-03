#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(10);
    mstack.push(15);
    mstack.push(20);
    mstack.push(25);

    std::cout << "Top : " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Pop" << std::endl;

    std::cout << "Top : " << mstack.top() << std::endl;

    std::cout << "Size : " << mstack.size() << std::endl;



    {
        std::cout << "Iterator Test" << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "Const Iterator Test" << std::endl;
        MutantStack<int>::const_iterator it = mstack.cbegin();
        MutantStack<int>::const_iterator ite = mstack.cend();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "Reverse Iterator Test" << std::endl;
        MutantStack<int>::reverse_iterator it = mstack.rbegin();
        MutantStack<int>::reverse_iterator ite = mstack.rend();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "Const Reverse Iterator Test" << std::endl;
        MutantStack<int>::const_reverse_iterator it = mstack.crbegin();
        MutantStack<int>::const_reverse_iterator ite = mstack.crend();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }

    //container_type can not be std::vector or std::list, only std::deque
    std::stack<int> s(mstack);

    return 0;
}