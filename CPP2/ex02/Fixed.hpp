#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(const Fixed &other);
        Fixed & operator=(const Fixed &other);
        ~Fixed();

        int getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat() const;
        int toInt() const;

        //Operateurs arithmetiques
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        //Operateurs de comparaisons
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        //Incrementation / Decrementations
        Fixed & operator++();
        Fixed   operator++(int);
        Fixed & operator--();
        Fixed   operator--(int);

        //Membre statique min/max
        static Fixed &  min(Fixed &a, Fixed &b);
        static const Fixed &  min(const Fixed &a, const Fixed &b);
        static Fixed &  max(Fixed &a, Fixed &b);
        static const Fixed &  max(const Fixed &a, const Fixed &b);
};

std::ostream &  operator<<( std::ostream & o, Fixed const & i );

#endif