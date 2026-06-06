#include "Harl.hpp"


int main(int argc, char *argv[])
{
    Harl k;
    if (argc == 2)
        k.complain(argv[1]);
    else
    {
        std::cout << "Wrang input! Only 1 argument is allowed (DEBUG / INFO / WARNING / ERROR)." << std::endl;
        return 1;
    }
    return 0;
}