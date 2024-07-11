#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _health(10), _energy(10), _attack(0)
{
    this->name = name;
    std::cout << "Claptrap " << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other) : _health(other._health), _energy(other._energy), _attack(other._attack), name(other.name + ".copy")
{
    std::cout << "ClaptrapCopy " << name << " has been created" << std::endl;
}

ClapTrap &  ClapTrap::operator=(const ClapTrap & other)
{
    if (this != &other)
    {
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
        this->name = other.name;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap " << this->name << " has been destroyed" << std::endl;
}

void    ClapTrap::attack(const std::string & target)
{
    if ( this->_health > 0 && this->_energy > 0)
    {
        std::cout << "Claptrap " << this->name << " attacks " << target << " causing " << this->_attack << " points of damage !" << std::endl;
    }
    else
    {
        std::cout << "Claptrap " << this->name << " can't do anything without health or energy !" << std::endl;
    }
    this->_energy--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_health > 0)
    {
        std::cout << "Claptrap " << this->name << " took " << amount << " points of damage !" << std::endl;
        this->_health = (unsigned int)this->_health - amount; 
    }
    if (this->_health <= 0)
    {
        std::cout << "Oh no ! Claptrap " << this->name << " is dead !" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_health >= 0)
    {
        std::cout << "Claptrap " << this->name << " repaired " << amount << " points of health !" << std::endl;
        this->_health = (unsigned int)this->_health + amount; 
    }
    else if (this->_health < 0)
    {
        this->_health = 0;
        std::cout << "Claptrap " << this->name << " repaired " << amount << " points of health !" << std::endl;
        this->_health = (unsigned int)this->_health + amount; 
    }
    this->_energy--;
}