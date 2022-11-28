#include "iter.hpp"
#include <iostream>

void my_toupper(char& c)
{
    c = std::toupper(c);
}

int main()
{
    char arr[5] = {'a', 'B', 'c', 'D', 'e'};

    std::cout << arr << std::endl;

    iter(arr, sizeof(arr) / sizeof(*arr), my_toupper);

    std::cout << arr << std::endl;

    return 0;
}