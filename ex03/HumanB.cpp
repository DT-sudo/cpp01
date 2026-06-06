#include "HumanB.hpp"

HumanB::HumanB(std::string hname): name(hname), wpn(NULL)
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
Weapon& etWeapon(Weapon& w_name)
{
    wpn = &w_name.;
}

int main(void)
{
    int x = 10;

    int func(int x)
    {
        x = 1;
        return x;
    }

}

