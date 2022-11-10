#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const std::string& name)
: ClapTrap(name)
{
    std::cout << "FragTrap Parameterized constructor called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;

    name = fragtrap.name;
    hit_points = fragtrap.hit_points;
    energy_points = fragtrap.energy_points;
    attack_damage = fragtrap.attack_damage;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;

    if(this == &fragtrap)
        return *this;
    
    name = fragtrap.name;
    hit_points = fragtrap.hit_points;
    energy_points = fragtrap.energy_points;
    attack_damage = fragtrap.attack_damage;

    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if(energy_points <= 0)
        std::cout << "0 energy point" << std::endl;
    else
    {
        energy_points--;
        std::cout << "FragTrap " << name << " attacks " << target \
        << ", causing " << attack_damage << " points of damage and " << \
        energy_points << " EP left" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " high five!" << std::endl;
}