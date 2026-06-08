#include "sed_for_losers.hpp"

std::string replace_all(std::string content, std::string s1, std::string s2)
{
    size_t pos = 0;

    while (pos != std::string::npos)
    {
        pos = content.find(s1, pos);
        if (pos != std::string::npos)
        {
            content.erase(pos, s1.length());
            content.insert(pos, s2);
            pos += s2.length();
        }
    }
    return content;
}
