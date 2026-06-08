#ifndef HUMANB_HPP 
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon* wpn;

    public:
    void attack() const;
    void setWeapon(Weapon& weapon);

    HumanB(std::string hname);
    ~HumanB();
};

#endif 