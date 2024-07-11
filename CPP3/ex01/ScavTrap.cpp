#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _health = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "Scavtrap " << name << " has been created" << std::endl;
}

void    ScavTrap::attack(const std::string & target)
{
    if ( this->_health > 0 && this->_energy > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->_attack << " points of damage !" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " can't do anything without health or energy !" << std::endl;
    }
    this->_energy--;
}

void    ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap " << this->name << " has been destroyed" << std::endl;
}