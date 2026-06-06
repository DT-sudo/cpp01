#include "Zombie.hpp"

int main(void)
{
    int num = 5;
    std::string name = "Oleg";
    Zombie *head;

    head = zombieHorde(num, name);
    for(int i = 0; i < num; i++)
    {
        std::cout<< "Zombie #" << i << " ";
        head[i].announce();
        std::cout << std::endl;
    }
    delete[] head;
    return 0;
}
