#include "Fixed.hpp"

// Constructor
Fixed::Fixed(): _fixedPoint(0) {
	// std::cout << "Default constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl; 
}

// Copy constructor
Fixed::Fixed(Fixed const &number) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = number;
}

int Fixed::getRawBits(void) const {
  return _fixedPoint;
	// return std::cout << "getRawBits member function called" << std::endl, _fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
}

Fixed &Fixed::operator=(Fixed const &number) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &number)
		this->_fixedPoint = number.getRawBits();
	return *this;
}

Fixed::Fixed(const int value): _fixedPoint(value * (1 << _fractionalBits)) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _fixedPoint(roundf(value * (1 << _fractionalBits))) {
	// std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return (float)_fixedPoint / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return(_fixedPoint >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj) {
	return(out << obj.toFloat());
}

/* ---------- NEW ---------- */

// Comparison
bool Fixed::operator>(const Fixed& cmp) const {
	return (this->_fixedPoint > cmp._fixedPoint);
}

bool Fixed::operator>=(const Fixed& cmp) const {
	return (this->_fixedPoint >= cmp._fixedPoint);
}

bool Fixed::operator<(const Fixed& cmp) const {
	return (this->_fixedPoint < cmp._fixedPoint);
}

bool Fixed::operator<=(const Fixed& cmp) const {
	return (this->_fixedPoint <= cmp._fixedPoint);
}

bool Fixed::operator==(const Fixed& cmp) const {
	return (this->_fixedPoint == cmp._fixedPoint);
}

bool Fixed::operator!=(const Fixed& cmp) const {
	return (this->_fixedPoint != cmp._fixedPoint);
}

// + Overload
Fixed Fixed::operator+(const Fixed& add) const {
	return Fixed(toFloat() + add.toFloat());
}

// - Overload
Fixed Fixed::operator-(const Fixed& sub) const {
	return Fixed(toFloat() - sub.toFloat());
}

// * Overload
Fixed Fixed::operator*(const Fixed& mult) const {
	return Fixed(toFloat() * mult.toFloat());
}

// / Overload
Fixed Fixed::operator/(const Fixed& div) const {
	return Fixed(toFloat() / div.toFloat());
}

// ++ Overload
Fixed& Fixed::operator++(void){
	++_fixedPoint;
	return *this;
}

// Overload ++
Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	_fixedPoint++;
	return tmp;
}

// -- Overload
Fixed& Fixed::operator--(void){
	--_fixedPoint;
	return *this;
}

// Overload --
Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	_fixedPoint--;
	return tmp;
}

// min fixed point
Fixed& Fixed::min(Fixed& x, Fixed& y){
	return (x < y ? x : y);
}

// const min fixed point
const Fixed& Fixed::min(const Fixed& x, const Fixed& y){
	return (x < y ? x : y);
}

// max fixed point
Fixed& Fixed::max(Fixed& x, Fixed& y){
	return (x > y ? x : y);
}

// const max fixed point
const Fixed& Fixed::max(const Fixed& x, const Fixed& y){
	return (x > y ? x : y);
}