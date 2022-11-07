#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string weapon)
{
    type = weapon;
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string str)
{
    type = str;
}