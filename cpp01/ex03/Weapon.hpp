#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon()
    {
    }
    Weapon(std::string weapon)
    {
        type = weapon;
    }
    const std::string& getType()
    {
        return type;
    }
    void setType(std::string str)
    {
        type = str;
    }
};

#endif