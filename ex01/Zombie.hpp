#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        void announce();
        Zombie(); // construtor padrão (sem parâmetros)
        Zombie(const std::string &name); // construtor com parâmetros
        ~Zombie();
        void setName(const std::string &name);
};

Zombie* zombieHorde( int N, std::string name );

#endif