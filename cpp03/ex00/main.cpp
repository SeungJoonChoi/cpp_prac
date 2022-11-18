#include "ClapTrap.hpp"

int main()
{
    ClapTrap me("Seunchoi");
    ClapTrap enemy("Zombie");

    me.attack(enemy.getName());
    enemy.takeDamage(me.getAttackDamage());
    enemy.beRepaired(5);

    for(int i = 0; i < 6; ++i)
        enemy.takeDamage(3);
    enemy.beRepaired(5);
    enemy.attack(me.getName());


    return 0;
}