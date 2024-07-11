#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "???";
    std::cout << "Constructor WrongAnimal has been called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
    *this = other;
    std::cout << "Copy of constructor WrongAnimal has been called" << std::endl; 
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal has been called" << std::endl; 
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}