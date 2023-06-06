#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "-------------------------------------------" << std::endl;
	
	Fixed c(10);
	Fixed d(35);
	Fixed const e(22);
	Fixed const f(17);

	Fixed& MinResultRef = Fixed::min( c, d );
  const Fixed& MinResultConstRef = Fixed::min( e, f );
  std::cout << "MIN - resultRef: " << MinResultRef << std::endl;
  std::cout << "MIN - resultConstRef: " << MinResultConstRef << std::endl;

	Fixed& MaxResultRef = Fixed::max( c, d );
  const Fixed& MaxResultConstRef = Fixed::max( e, f );
  std::cout << "MAX - resultRef: " << MaxResultRef << std::endl;
  std::cout << "MAX - resultConstRef: " << MaxResultConstRef << std::endl;

	std::cout << "-------------------------------------------" << std::endl;

	Fixed const mult( Fixed( 10 ) * Fixed( 2 ) );
	Fixed const div( Fixed( 10 ) / Fixed( 2 ) );
	Fixed const add( Fixed( 10 ) + Fixed( 2 ) );
	Fixed const sub( Fixed( 10 ) - Fixed( 2 ) );

	std::cout << "Operator * : " << mult << std::endl;
	std::cout << "Operator / : " << div << std::endl;
	std::cout << "Operator + : " << add << std::endl;
	std::cout << "Operator - : " << sub << std::endl;

	std::cout << "-------------------------------------------" << std::endl;

	Fixed x(20);
	std::cout << "value: " << x << std::endl;
	std::cout << "Post-increment: " << x++ << std::endl;
	std::cout << "value: " << x << std::endl;
	std::cout << "Post-decrement: " << x-- << std::endl;
	std::cout << "value: " << x << std::endl;
	std::cout << "Pre-increment: " << ++x << std::endl;
	std::cout << "value: " << x << std::endl;
	std::cout << "Pre-decrement: " << --x << std::endl;
	std::cout << "value: " << x << std::endl;

	std::cout << "-------------------------------------------" << std::endl;

		Fixed cmp1(12);
    Fixed cmp2(8);

    bool greaterThan = cmp1 > cmp2;
    bool greaterThanOrEqual = cmp1 >= cmp2;
    bool lessThan = cmp1 < cmp2;
    bool lessThanOrEqual = cmp1 <= cmp2;
    bool equalTo = cmp1 == cmp2;
    bool notEqualTo = cmp1 != cmp2;

    std::cout << "cmp1 > cmp2: " << greaterThan << std::endl;
    std::cout << "cmp1 < cmp2: " << lessThan << std::endl;
    std::cout << "cmp1 >= cmp2: " << greaterThanOrEqual << std::endl;
    std::cout << "cmp1 <= cmp2: " << lessThanOrEqual << std::endl;
    std::cout << "cmp1 == cmp2: " << equalTo << std::endl;
    std::cout << "cmp1 != cmp2: " << notEqualTo << std::endl;

	return 0;
}