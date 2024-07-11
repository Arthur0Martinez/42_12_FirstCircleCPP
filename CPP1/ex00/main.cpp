#include "Zombie.hpp"

Zombie  *newzombie(std::string name);

void    randomChump(std::string name);

int main(void)
{
    Zombie  *z = newzombie("bbbbbbbb");
    z->announce();
    randomChump("aaaaaaaa");
    delete z;
}