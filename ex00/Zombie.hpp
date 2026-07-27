#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string _name; // _name é atributo

    public:
        void announce();
        Zombie(const std::string &name); // é parâmetro
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif