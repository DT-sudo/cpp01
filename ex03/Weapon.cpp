#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    type = type;
}

const std::string& Weapon::getType() const
{
    return type;
}

Weapon::Weapon(std::string w_name) : type(w_name)
{
}
