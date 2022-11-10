#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap &fragtrap);
    ~FragTrap();
    FragTrap& operator=(const FragTrap& fragtrap);

    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif