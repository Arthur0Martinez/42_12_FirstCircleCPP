#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Constructor Dog has been called" << std::endl; 
}

Dog::Dog(const Dog & other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Copy of constructor Dog has been called" << std::endl; 
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Destructor Dog has been called" << std::endl; 
}

Dog & Dog::operator=(const Dog & other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog goes WOOF" << std::endl;
}