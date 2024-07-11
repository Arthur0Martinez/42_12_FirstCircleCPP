#include "Animal.hpp"

Animal::Animal()
{
    this->type = "???";
    std::cout << "Constructor Animal has been called" << std::endl; 
}

Animal::Animal(const Animal & other)
{
    *this = other;
    std::cout << "Copy of constructor Animal has been called" << std::endl; 
}

Animal::~Animal()
{
    std::cout << "Destructor Animal has been called" << std::endl; 
}

Animal & Animal::operator=(const Animal & other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}