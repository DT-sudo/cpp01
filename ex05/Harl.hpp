#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    private:
    std::string levels[4];
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void (Harl::*ptr[4])();

    public:
    Harl();
    void complain( std::string level );
};



#endif
