#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB(std::string str);
    void setWeapon(Weapon& w);
    void attack(void);
};

#endif