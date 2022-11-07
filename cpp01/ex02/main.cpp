#include <iostream>

int main()
{
    std::string str;
    str = "HI THIS IS BRAIN";

    std::string* stringPTR;
    stringPTR = &str;
    
    std::string& stringREF = str;

    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}