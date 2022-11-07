#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& w)
: weapon(w), name(str)
{
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}