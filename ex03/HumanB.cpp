#include "HumanB.hpp"

HumanB::HumanB(std::string hname): name(hname), wpn(NULL)
{
}

HumanB::~HumanB()
{   
}

void HumanB::attack() const
{
    if (wpn != NULL)
        std::cout << name << " attacks with their " << wpn->getType() << std::endl;    
    else 
    {
        std::cout << name << " is unarmored!" << std::endl;
    }
}

void HumanB::setWeapon(Weapon& w_name)
{
    wpn = &w_name;
}
