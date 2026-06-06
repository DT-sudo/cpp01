#include "Zombie.hpp"

void Zombie::announce(void)
{   
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Zombie constructor called\n" << std::endl;
    announce();
}

Zombie::~Zombie()
{
    std::cout<< "Zombie destructor called\n" << std::endl;
}
