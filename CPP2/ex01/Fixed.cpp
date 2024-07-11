#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : value(other.value)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : value(intValue << fractionalBits)
{
    std::cout << "Int constructor " << value << " called" << std::endl;
}

Fixed::Fixed(const float floatValue)
{
    this->value = roundf(floatValue * (1 << fractionalBits));
    std::cout << "Float constructor " << value << " called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (getRawBits() != other.value)
    {
        this->value = other.value;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void    Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float   Fixed::toFloat() const
{
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
    return value >> fractionalBits;
}

std::ostream &  operator<<( std::ostream & o, Fixed const & i )
{
    o << i.toFloat();
    return o;
}