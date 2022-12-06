#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr;
    for(int i = 0; i < 100; ++i)
        arr.push_back(i);

    std::vector<int>::iterator itr = easyfind(arr, 42);

    if(itr == arr.end())
        std::cout << "Can not find value" << std::endl;
    else
    {
        std::cout << "*itr : " << *itr << std::endl;

        std::cout << "@@@@@ Print until end @@@@@" << std::endl;
        for(int i = 0; itr + i != arr.end(); ++i)
        {
            std::cout << itr[i] << "\t";
            if(i % 5 == 4)
                std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}