#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(const std::string & name_in);
    DiamondTrap(const DiamondTrap & diamondtrap);
    ~DiamondTrap();
    DiamondTrap& operator=(const DiamondTrap & diamondtrap);

    using ScavTrap::attack;

    void whoAmI();

    void print(void)
    {
        std::cout << name << std::endl;
        std::cout << hit_points << std::endl;
        std::cout << energy_points << std::endl;
        std::cout << attack_damage << std::endl;
    }
};

#endif