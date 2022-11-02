#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* ret;

    ret = new Zombie(name);
    return ret;
}

void randomChump( std::string name )
{
    Zombie zombie(name);
    zombie.announce();
}

int main()
{
    Zombie* zom;

    randomChump("Zom");
    zom = newZombie("Bie");
    (*zom).announce();
    delete zom;
    return 0;
}