#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{

protected:
    int _health;
    int _energy;
    int _attack;
    std::string name;

public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap & other);
    ClapTrap &  operator=(const ClapTrap & other);
    ~ClapTrap();

    void    attack(const std::string & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif