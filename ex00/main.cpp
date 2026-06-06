#include "Zombie.hpp"

int main(void)
{
    std::string name;

    std::cout << "name ('name s/l')> " << std::endl;
    while (std::getline(std::cin, name))
    {
        std::cout << "name ('name s/l')> " << std::endl;
        if (name.substr(name.size() - 1, name.size()) == "s")
            randomChump(name);
        else if (name.substr(name.size() - 1, name.size()) == "l")
            newZombie(name);
    }
    return 0;
}
