#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Constructor Cat has been called" << std::endl; 
}

Cat::Cat(const Cat & other) : Animal(other)
{
;
    this->brain = new Brain(*other.brain);
    std::cout << "Copy of constructor Cat has been called" << std::endl; 
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Destructor Cat has been called" << std::endl; 
}

Cat & Cat::operator=(const Cat & other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat goes MIAOU" << std::endl;
}