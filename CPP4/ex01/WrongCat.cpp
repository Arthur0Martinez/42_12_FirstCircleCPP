#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Constructor WrongCat has been called" << std::endl; 
}

WrongCat::WrongCat(const WrongCat & other)
{
    *this = other;
    std::cout << "Copy of constructor WrongCat has been called" << std::endl; 
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat has been called" << std::endl; 
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat goes MIAOU" << std::endl;
}