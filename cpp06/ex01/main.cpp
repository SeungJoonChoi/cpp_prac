#include "Data.hpp"

int main()
{
    Data d("John", 20, 180, 75);
    uintptr_t p;

    p = serialize(&d);
    printData(p);

    std::cout << &d << std::endl;
    std::cout << std::hex << p << std::endl;

    return 0;
}