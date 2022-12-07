#include "iter.hpp"
#include <iostream>

void my_toupper(char& c)
{
    c = std::toupper(c);
}

void my_tolower(char& c)
{
    c = std::tolower(c);
}

void my_putchar(char const & c)
{
    std::cout << c;
}

int main()
{
    char arr[5] = {'a', 'B', 'c', 'D', 'e'};

    iter(arr, sizeof(arr) / sizeof(*arr), my_putchar);

    std::cout << std::endl;

    iter(arr, sizeof(arr) / sizeof(*arr), my_toupper);

    iter(arr, sizeof(arr) / sizeof(*arr), my_putchar);

    std::cout << std::endl;

    iter(arr, sizeof(arr) / sizeof(*arr), my_tolower);

    iter(arr, sizeof(arr) / sizeof(*arr), my_putchar);

    std::cout << std::endl;

    return 0;
}