#include "Zombie.hpp"

int main()
{
    Zombie* horde;
    int n;

    n = 3;
    horde = zombieHorde(n, "zombie");
    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}