#include "Zombie.hpp"

int main()
{
    Zombie* zom;

    randomChump("Zom");
    zom = newZombie("Bie");
    (*zom).announce();
    delete zom;
    return 0;
}