#include "Harl.hpp"

int main()
{
    Harl a;

    a.complain("DEBUG");
    std::cout << std::endl;
    a.complain("INFO");
    std::cout << std::endl;
    a.complain("WARNING");
    std::cout << std::endl;
    a.complain("ERROR");

    return 0;
}