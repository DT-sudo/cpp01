#include "Zombie.hpp"

void Zombie::name_it(std::string name)
{
    _name = name;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout<< "Zombie constructor called\n" << std::endl;
}

Zombie::~Zombie()
{
    std::cout<< "Zombie "<< _name <<" destructor called\n" << std::endl;
}
