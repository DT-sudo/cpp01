#include "HumanA.hpp"

HumanA::HumanA(std::string hname, Weapon& weapon) : name(hname), wpn(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
    std::cout << name << " attacks with their " << wpn.getType() << std::endl;    
}
