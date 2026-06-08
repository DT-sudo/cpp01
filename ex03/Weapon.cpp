#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    _type = type;
}

const std::string& Weapon::getType() const
{
    return _type;
}

Weapon::Weapon(std::string w_name) : _type(w_name)
{
}

Weapon::~Weapon()
{
}
