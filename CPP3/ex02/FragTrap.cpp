#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _health = 100;
    _energy = 100;
    _attack = 30;
    std::cout << "FragTrap " << name << " has been created" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " has high fived everyone !" << std::endl;
}

void    FragTrap::attack(const std::string & target)
{
    if ( this->_health > 0 && this->_energy > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->_attack << " points of damage !" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << this->name << " can't do anything without health or energy !" << std::endl;
    }
    this->_energy--;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
}