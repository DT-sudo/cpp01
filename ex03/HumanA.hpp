#ifndef HUMANA_HPP 
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon& wpn;

    public:
    void attack() const;

    HumanA(std::string hname, Weapon& weapon);
    ~HumanA(){};
};

#endif 