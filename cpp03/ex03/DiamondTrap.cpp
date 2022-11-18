#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("unknown_clap_name")
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    hit_points = 100;
    attack_damage = 30;
}

DiamondTrap::DiamondTrap(const std::string & name_in)
: ClapTrap(name_in + "_clap_name")
{
    std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
    name = name_in;
    hit_points = 100;
    attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamondtrap)
: ClapTrap(diamondtrap.name + "_clap_name")
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    name = diamondtrap.name;
    hit_points = diamondtrap.hit_points;
    energy_points = diamondtrap.energy_points;
    attack_damage = diamondtrap.attack_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & diamondtrap)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;

    if(this == &diamondtrap)
        return *this;
    ClapTrap::name = diamondtrap.name + "_clap_trap";
    name = diamondtrap.name;
    hit_points = diamondtrap.hit_points;
    energy_points = diamondtrap.energy_points;
    attack_damage = diamondtrap.attack_damage;

    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap Name : " + ClapTrap::name << std::endl;
    std::cout << "DiamondTrap Name : " + name << std::endl;
}