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
            pos += v2.length();
        }
    }
    return line;
}
