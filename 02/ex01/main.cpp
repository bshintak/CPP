#include "Fixed.hpp"

int main( void ) {
	Fixed a; // so chama o constructor
	Fixed const b( 10 ); // 00001010 (em binario) // so chama o int constructor
	Fixed const c( 42.42f ); // so chama o float constructor
	Fixed const d( b ); // copy constructor, copy assignment e getRawBits
	a = Fixed( 1234.4321f ); // float constructor, copy assignment e getRawBits
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}