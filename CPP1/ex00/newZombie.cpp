#include "Zombie.hpp"

Zombie  *newzombie(std::string name)
{
    return (new Zombie(name));
}