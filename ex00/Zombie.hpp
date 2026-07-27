#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        void announce();
        Zombie(const std::string &name);
        ~Zombie();
};

#endif