#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : value(other.value)
{
    //std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : value(intValue << fractionalBits)
{
    //std::cout << "Int constructor " << value << " called" << std::endl;
}

//Toute cette fonction a revoir
Fixed::Fixed(const float floatValue)
{
    this->value = roundf(floatValue * (1 << fractionalBits));
    //std::cout << "Float constructor " << value << " called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &other)
{
    //std::cout << "Copy assignement operator called" << std::endl;
    if (getRawBits() != other.value)
    {
        this->value = other.value;
    }
    return *this;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    //std::cout << "getRawBits member function called" << std::endl;
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

//Operateurs arithmetiques

Fixed   Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed   Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed   Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed   Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

//Operateurs de comparaisons

bool    Fixed::operator>(const Fixed &other) const
{
    return (this->value > other.value);
}

bool    Fixed::operator<(const Fixed &other) const
{
    return (this->value < other.value);
}

bool    Fixed::operator>=(const Fixed &other) const
{
    return (this->value >= other.value);
}

bool    Fixed::operator<=(const Fixed &other) const
{
    return (this->value <= other.value);
}

bool    Fixed::operator==(const Fixed &other) const
{
    return (this->value == other.value);
}

bool    Fixed::operator!=(const Fixed &other) const
{
    return (this->value != other.value);
}

//Incrementation / Decrementations
Fixed   &Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   temp = *this;
    ++(*this);
    return  temp;
}

Fixed   &Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   temp = *this;
    --(*this);
    return  temp;
}

//Membre statique min/max
Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    //Operateur ternaire
    return (a < b) ? a : b;
}

const Fixed   &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed   &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

std::ostream &  operator<<( std::ostream & o, Fixed const & i )
{
    o << i.toFloat();
    return o;
}