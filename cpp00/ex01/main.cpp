// #include <iostream>
// #include <string>
#include "Phonebook.hpp"

int main()
{
    std::string input;
    Phonebook a;
    // std::string input;

    // while(std::getline(std::cin, input))
    // {

    // }
    while (1)
    {
        std::cout << "Input : ";
        std::getline(std::cin, input);
        if(input.compare("ADD") == 0)
        {
            a.addContent();
        }
        else if (input.compare("SEARCH") == 0)
        {
            a.searchContent();
        }
        else if (input.compare("EXIT") == 0)
        {
            std::exit(0);
        }
    }
    return 0;
}