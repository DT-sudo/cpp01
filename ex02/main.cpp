#include <iostream>
#include <string>

int main(void)
{
    std::string fs = "HI THIS IS BRAIN";
    std::string *fs_ptr = &fs;
    std::string &ref = fs;

    std::cout << "the memory address held by string var: " << &fs << std::endl;
    std::cout << "the memory address held by ptr: " << fs_ptr<< std::endl;
    std::cout << "the memory address held by reference: " << &ref << std::endl;
    std::cout << "the value held by string var: " << fs << std::endl;
    std::cout << "the value held by ptr: " << *fs_ptr<< std::endl;
    std::cout << "the value held by reference: " << ref << std::endl;
    return 0;
}