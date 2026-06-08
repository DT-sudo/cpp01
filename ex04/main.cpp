#include "sed_for_losers.hpp"

int main(int argc, char *argv[])
{
    std::string line;
    std::string myfile;
    std::string v1;    
    std::string v2;  
    std::ifstream YourFile;
    std::ofstream MyFile;

    if (argc != 4 || argv[2][0] == '\0')
    {
        std::cout << "Wrong input!" << std::endl;
        return 1;
    }
    myfile = argv[1];
    myfile = myfile + ".replace";
    v1 = argv[2];
    v2 = argv[3];
    YourFile.open(argv[1]);
    if (!YourFile)
    {
        std::cout << "file doesn't exists!" << std::endl;
        return 1;
    }
    MyFile.open(myfile.c_str());
    if (!MyFile)
    {
        std::cout << "can't create output file!" << std::endl;
        return 1;
    }
    while (getline(YourFile, line))
        MyFile << analine(line, v1, v2) + "\n";
    return 0;
}
