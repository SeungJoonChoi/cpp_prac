#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB(std::string str)
    {
        name = str;
        weapon = NULL;
    }
    void setWeapon(Weapon& w)
    {
        weapon = &w;
    }
    void attack(void)
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
};

#endif