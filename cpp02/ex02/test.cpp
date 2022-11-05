#include "Fixed.hpp"
#include <iomanip>
#include <limits>

int main()
{
    int i = 0;

    i = i << 8;
    i += 1;
    std::cout << (float)i / (float)(1 << 8) << std::endl;
    return 0;
}