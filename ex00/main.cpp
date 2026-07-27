#include "Zombie.hpp"

int main ()
{
    Zombie *zombie;

    zombie = newZombie("Zombie Tom");
    zombie->announce();
    randomChump("Zombie margaret");
    delete zombie;
    return 0;
}