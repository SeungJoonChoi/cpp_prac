#include <iostream>
#include <iomanip>

int main()
{
    int x;
    std::cin >> x;
    std::cout << std::cin.fail() << std::endl;
    std::cout << x << "hello" << std::endl;

    return 0;
}