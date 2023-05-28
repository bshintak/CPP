#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &number);
		Fixed &operator=(Fixed const &number);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int 				_fixedPoint;
		static int const	_fractionalBits = 8;
};

#endif