#include "sed_for_losers.hpp"

std::string analine(std::string line, std::string v1, std::string v2)
{
    size_t pos = 0;

    while (pos != std::string::npos)
    {
        pos = line.find(v1, pos);
        if (pos != std::string::npos)
        {
            line.erase(pos, v1.length());
            line.insert(pos, v2);
        }
    }
    return line;
}

int main(int argc, char *argv[])
{
    std::string line = ".";
    std::string myfile;
    std::string v1;    
    std::string v2;  

    if(argc == 4 && argv[2])
    {
        myfile = argv[1];
        myfile = myfile + ".replace";
        v1 = argv[2];
        v2 = argv[3];
        std::ifstream YourFile(argv[1]);
        std::ofstream MyFile(myfile); 
        if (!YourFile)
            std::cout<<"file doesn't exists!" << std::endl;
        while(getline(YourFile, line))
        {
            MyFile << analine(line, v1, v2) + "\n"; //check about last \n
        }
    }
    else
        return 1;
    return 0;
}



// int main(void)
// {
//     // std::ofstream MyF; 
//     std::ofstream MyF("txt.txt"); 
//     // std::string q = "1234567890";
//     char q[] = "1234567890";

//     // MyF.open("file.txt");
    
//     MyF << "jopa\n"<< std::endl;
//     // MyF.write(q, 3);
//     MyF << "jopa\n";
//     MyF.write(q, 3);
//     MyF << "jopa\n"<< std::ends;
//     MyF << "jopa\n"<< std::endl;
 
//     // MyF.close("file.txt");
//     return 0;
// }

// --------------------------
// #inlcude <fstream>
// --------------------------
//  std::ofstream MyF("name") or MyF;

// .put(char 'A') //chars
// .write(char[] "name", int n) //chars
// .open(name) //
// .close(name) //
// --------------------------
// std::ifstream ReadMyF("name")
// 
// 
// 1. получить переменные спарсить их 
// 2. прочитать файл по строкам, анализировать строку и заменять ее необходимые элементы 
// 3. записывать измененные строки в новый файл
// 4. закрыть файлы 