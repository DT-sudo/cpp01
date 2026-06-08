#include "HumanA.hpp"

HumanA::HumanA(std::string hname, Weapon& weapon) : name(hname), wpn(weapon)
{
    std::cout << "HumanA construct called" << std::endl;    
}

HumanA::~HumanA()
{
    std::cout << "HumanA distruct called" << std::endl;
}

void HumanA::attack() const
{
    std::cout << name << " attacks with their " << wpn.getType() << std::endl;    
}
