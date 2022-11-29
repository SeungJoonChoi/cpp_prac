#include <iostream>

int main()
{
    std::string str("A hello");

    // std::cout << static_cast<double>(str[0]) << std::endl;
    // std::cout << str[0] << std::endl;
    if(str[0] == 64)
        std::cout << "!!!" << std::endl;

    // int* a = new int[5];

    // for(int i = 0; i < 5; ++i)
    //     std::cout << a[i] << std::endl;

    return 0;
}