#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{
private:
    Weapon& weapon;
    std::string name;
public:
    HumanA(std::string str, Weapon& w)
    : weapon(w), name(str)
    {
    }
    void attack(void)
    {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    }
};

#endif