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
    void complain( std::string level );

    Harl()
    {
        levels[0] = "DEBUG";
        levels[1] = "INFO";
        levels[2] = "WARNING";
        levels[3] = "ERROR";
        ptr[0] = &Harl::debug;
        ptr[1] = &Harl::info;
        ptr[2] = &Harl::warning;
        ptr[3] = &Harl::error;
    };
};



#endif