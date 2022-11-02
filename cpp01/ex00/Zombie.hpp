#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string str)
    {
        name = str;
    }
    void announce(void)
    {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

#endif