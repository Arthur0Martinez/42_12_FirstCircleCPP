#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
    std::cout << "Zombie " << this->name << " has awaken" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " is dead. Again ?" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::Zombie_name(std::string name)
{
    this->name = name;
}

