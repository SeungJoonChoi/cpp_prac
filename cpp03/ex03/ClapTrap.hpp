#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;
public:
    ClapTrap();
    ClapTrap(const std::string& str);
    ClapTrap(const ClapTrap &claptrap);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &claptrap);

    const std::string& getName(void);
    unsigned int getAttackDamage(void);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif