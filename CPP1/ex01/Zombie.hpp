#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(void);
        ~Zombie(void);
        void    Zombie_name(std::string name);
        void    announce(void);
};

#endif