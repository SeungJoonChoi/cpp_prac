#include "ClapTrap.hpp"

int main()
{
    ClapTrap me("Seunchoi");
    ClapTrap enemy("Zombie");

    me.attack(enemy.getName());
    enemy.takeDamage(me.getAttackDamage());
    enemy.beRepaired(5);

    return 0;
}