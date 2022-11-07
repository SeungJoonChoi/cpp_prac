#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
    weapon = NULL;
}

void HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}