#include <iostream>
#include <cmath>

// int main()
// {
//     float f = 1234.4321f;
//     int n;

//     // n=(int)(f*256);
//     n = roundf(f * 256);

//     std::cout << n << std::endl;
//     // std::cout << (n >> 8) << std::endl;
//     std::cout << (float)n / (float)256 << std::endl;
//     return 0;
// }

int main()
{
    unsigned int c = 4294967295;
    std::cout << c << std::endl;
    c = c << 8;
    std::cout << c << std::endl;
    c = c >> 8;
    std::cout << c << std::endl;
}