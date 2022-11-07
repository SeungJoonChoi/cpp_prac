#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
public:
    ClapTrap();
    ClapTrap(const ClapTrap &claptrap);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &claptrap);
};

#endif