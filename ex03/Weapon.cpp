#include "Weapon.hpp"

void Weapon::setType(const std::string &type)
{
    this->type = type;
}

const std::string &Weapon::getType() const
{
    return this->type;
}