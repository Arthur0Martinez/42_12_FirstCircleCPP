#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Constructor Cat has been called" << std::endl; 
}

Cat::Cat(const Cat & other)
{
    *this = other;
    std::cout << "Copy of constructor Cat has been called" << std::endl; 
}

Cat::~Cat()
{
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