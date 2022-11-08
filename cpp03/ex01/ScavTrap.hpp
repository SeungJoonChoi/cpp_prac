#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap()
    {
        std::cout << "ScavTrap Default constructor called" << std::endl;
    }
    ScavTrap(const std::string& name)
    : ClapTrap(name)
    {
        std::cout << "ScavTrap Parameterized constructor called" << std::endl;
    }
    ScavTrap(const ScavTrap &scavtrap)
    {
        std::cout << "ScavTrap Copy constructor called" << std::endl;

        name = scavtrap.name;
        hit_points = scavtrap.hit_points;
        energy_points = scavtrap.energy_points;
        attack_damage = scavtrap.attack_damage;
    }

    ~ScavTrap()
    {
        std::cout << "ScavTrap Destructor called" << std::endl;
    }

    ScavTrap& operator=(const ScavTrap& scavtrap)
    {
        std::cout << "ScavTrap Copy assignment operator called" << std::endl;

        if(this == &scavtrap)
            return *this;
        
        name = scavtrap.name;
        hit_points = scavtrap.hit_points;
        energy_points = scavtrap.energy_points;
        attack_damage = scavtrap.attack_damage;

        return *this;
    }


    void attack(const std::string& target);

    void guardGate()
    {
        std::cout << "ScavTrap " << name << " HP : " << hit_points << \
        " EP : " << energy_points << " Attack Damage : " << attack_damage << \
        " is now in Gatekeeper mode." << std::endl;
    }
};

#endif