#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &number);
		Fixed(const int value); //subject
		Fixed(const float value); //subject
    	Fixed & operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const; //subject
		int		toInt(void) const; //subject
	private:
		int 				_fixedPoint; //subject
		static int const	_fractionalBits = 8; //subject
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif