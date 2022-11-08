#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
    if(energy_points <= 0)
        std::cout << "0 energy point" << std::endl;
    else
    {
        energy_points--;
        std::cout << "ScavTrap " << name << " attacks " << target \
        << ", causing " << attack_damage << " points of damage and " << \
        energy_points << " EP left" << std::endl;
    }
}