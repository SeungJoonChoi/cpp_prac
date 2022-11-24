#include <iostream>
#include <sstream>

int main(int argc, char** argv)
{
    double d;

    char *ptr = NULL;

    std::string input = argv[1];

    // std::stringstream ss;

    // ss << input;
    // ss >> d;

    d = std::strtod(input.c_str(), &ptr);

    // std::cout << ptr << std::endl;
    std::cout << d << std::endl;
    // std::cout << input << std::endl;

    // try
    // {
    //     throw std::bad_alloc();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    

    return 0;
}