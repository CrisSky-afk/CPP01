#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &name) : _name(name) // lista de inicializacao, o objeto ja nasce com o valor "name"
{
    std::cout << "Zombie \"" << _name << "\" created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie \"" << _name << "\" destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : _name()
{
}

void Zombie::setName(const std::string &name)
{
    _name = name;
}