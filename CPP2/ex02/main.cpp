#include "Fixed.hpp"

int main( void )
{
    Fixed   a;
    Fixed const   b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed   c( 42.42f );
    Fixed   d( 123 );
    Fixed   e( c );
    Fixed   f;
    Fixed   g;
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl << std::endl << std::endl;

    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;


    std::cout << Fixed::min( a, b ) << std::endl;
    
    a = c / g;
    std::cout << a << std::endl;
    a = c * g;
    std::cout << a << std::endl;
    a = c + g;
    std::cout << a << std::endl;
    a = c - g;
    std::cout << a << std::endl;

    if (c < d)
    	std::cout << "C est inferieur a D" << std::endl;
    if (c > d)
    	std::cout << "C est superieur a D" << std::endl;
    if (c <= d)
    	std::cout << "C est strictement inferieur a D" << std::endl;
    if (c >= d)
    	std::cout << "C est strictement superieur a D" << std::endl;
    if (c == d)
    	std::cout << "C est egal a D" << std::endl;
    if (c != d)
    	std::cout << "C est different de D" << std::endl;
    return 0;
}
