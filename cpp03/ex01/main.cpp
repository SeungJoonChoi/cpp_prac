#include "ScavTrap.hpp"

int main()
{
    ScavTrap A("A");
    ScavTrap B(A);
    ScavTrap C;

    A.attack("Zombie");
    A.guardGate();

    B.attack("Zombie");
    B.guardGate();

    C = B;
    C.attack("Zombie");
    C.guardGate();

    return 0;
}