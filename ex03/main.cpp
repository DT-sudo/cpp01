#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon wpn("Valyna");

    HumanA a("Valera", wpn);
    HumanB b("Igorek");

    std::cout << "The weapon now is: " << wpn.getType() << std::endl;
    b.attack();
    b.setWeapon(wpn);
    b.attack();
    a.attack();
    wpn.setType("Martira");

    std::cout << "The weapon now is: " << wpn.getType() << std::endl;

    a.attack();
    b.attack();
    return 0;
}