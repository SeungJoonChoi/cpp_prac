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

    zom = newZombie("tmdwns");
    (*zom).announce();
    randomChump("seunchoi");
    delete zom;
    return 0;
}