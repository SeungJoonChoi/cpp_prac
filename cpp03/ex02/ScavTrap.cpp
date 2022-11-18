#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string& name)
: ClapTrap(name)
{
    std::cout << "ScavTrap Parameterized constructor called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;

    name = scavtrap.name;
    hit_points = scavtrap.hit_points;
    energy_points = scavtrap.energy_points;
    attack_damage = scavtrap.attack_damage;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
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


void ScavTrap::attack(const std::string& target)
{
    if(hit_points <= 0)
        std::cout << name << " is dead" << std::endl;
    else if(energy_points <= 0)
        std::cout << name << " has no energy point" << std::endl;
    else
    {
        energy_points--;
        std::cout << "ScavTrap " << name << " attacks " << target \
        << ", causing " << attack_damage << " points of damage and " << \
        energy_points << " EP left" << std::endl;
    }
}

void ScavTrap::guardGate()
{   if(hit_points <= 0)
        std::cout << name << " is dead" << std::endl;
    else
    {
        std::cout << "ScavTrap " << name << " HP : " << hit_points << \
        " EP : " << energy_points << " Attack Damage : " << attack_damage << \
        " is now in Gatekeeper mode." << std::endl;
    }
}

