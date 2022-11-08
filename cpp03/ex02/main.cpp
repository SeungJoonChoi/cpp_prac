#include "ScavTrap.hpp"

int main()
{
    ScavTrap A("A");
    ScavTrap B("B");
    ClapTrap C("C");

    A.attack(C.getName());
    C.takeDamage(A.getAttackDamage());
    A.attack(C.getName());
    C.takeDamage(A.getAttackDamage());
    C.beRepaired(10);
    std::cout << std::endl;

    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());
    B.beRepaired(10);
    std::cout << std::endl;

    C.attack(A.getName());
    A.takeDamage(C.getAttackDamage());
    std::cout << std::endl;

    A.guardGate();
    B.guardGate();
    // C.guardGate();

    return 0;
}