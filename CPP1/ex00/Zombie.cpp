#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie " << this->name << " as awoken" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is dead. Again ?" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}