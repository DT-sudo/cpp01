#include "HumanA.hpp"

HumanA::HumanA(std::string hname, Weapon& weapon) : name(hname), wpn(weapon)
{
}

void HumanA::attack() const
{
    std::cout << name << " attacks with their " << wpn.getType() << std::endl;    
}