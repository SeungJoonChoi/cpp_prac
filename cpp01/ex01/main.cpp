#include "Zombie.hpp"

int main()
{
    Zombie* horde;
    int n;

    n = 10;
    horde = zombieHorde(10, "zombie");
    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}