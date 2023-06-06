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
		Fixed(const int value);
		Fixed(const float value);
    	Fixed & operator=(Fixed const &rhs);

		bool operator>(const Fixed &cmp) const;
		bool operator<(const Fixed &cmp) const;
		bool operator>=(const Fixed &cmp) const;
		bool operator<=(const Fixed &cmp) const;
		bool operator==(const Fixed &cmp) const;
		bool operator!=(const Fixed &cmp) const;

		Fixed operator+(const Fixed& add) const;
		Fixed operator-(const Fixed& sub) const;
		Fixed operator*(const Fixed& mult) const;
		Fixed operator/(const Fixed& div) const;

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static Fixed& min( Fixed& x, Fixed& y );
		static const Fixed& min( const Fixed& x, const Fixed& y );
		static Fixed& max( Fixed& x, Fixed& y );
		static const Fixed& max( const Fixed& x, const Fixed& y );

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int 				_fixedPoint;
		static int const	_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif