#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *newZombies;
    newZombies = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        newZombies[i].setName(name);
    }
    return (newZombies);
}