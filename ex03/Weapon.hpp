#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:

    // funcoes membros
        void setType(const std::string &type);
        const std::string &getType() const;
};

#endif