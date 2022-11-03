#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl a;
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    if (argc != 2)
        exit(1);

    for(i = 0; i < 4; i++)
    {
        if(level[i] == argv[1])
            break;
    }
    switch(i)
    {
    case 0:
        std::cout << "[ DEBUG ]" << std::endl;
        a.complain(level[0]);
        std::cout << std::endl;
    case 1:
        std::cout << "[ INFO ]" << std::endl;
        a.complain(level[1]);
        std::cout << std::endl;
    case 2:
        std::cout << "[ WARNING ]" << std::endl;
        a.complain(level[2]);
        std::cout << std::endl;
    case 3:
        std::cout << "[ ERROR ]" << std::endl;
        a.complain(level[3]);
        std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}