#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: name("unknown"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& str)
: name(str), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;

    name = claptrap.name;
    hit_points = claptrap.hit_points;
    energy_points = claptrap.energy_points;
    attack_damage = claptrap.attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;

    if(this == &claptrap)
        return *this;
    
    name = claptrap.name;
    hit_points = claptrap.hit_points;
    energy_points = claptrap.energy_points;
    attack_damage = claptrap.attack_damage;

    return *this;
}

const std::string& ClapTrap::getName(void)
{
    return name;
}

unsigned int ClapTrap::getAttackDamage(void)
{
    return attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
    if(hit_points <= 0)
        std::cout << name << " is dead" << std::endl;
    else if(energy_points <= 0)
        std::cout << name << " has no energy point" << std::endl;
    else
    {
        energy_points--;
        std::cout << "ClapTrap " << name << " attacks " << target \
        << ", causing " << attack_damage << " points of damage and " << \
        energy_points << " EP left" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(hit_points <= amount)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount \
    << " damages, now " << hit_points << " HP left!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(hit_points <= 0)
        std::cout << name << " is dead" << std::endl;
    else if(energy_points <= 0)
        std::cout << name << " has no energy point" << std::endl;
    else
    {
        energy_points--;
        hit_points += amount;
        std::cout << "ClapTrap " << name << " recovers " << amount \
        << " HP, now " << energy_points << " EP, " << hit_points << \
        " HP left!" << std::endl;
    }
}