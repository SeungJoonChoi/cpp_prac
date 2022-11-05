#include "Fixed.hpp"
#include <iomanip>
#include <limits>

int main()
{
    std::cout << (Fixed(5.05f) + Fixed(2)).toFloat() << std::endl;
    std::cout << (Fixed(5.05f) - Fixed(2)).toFloat() << std::endl;
    return 0;
}