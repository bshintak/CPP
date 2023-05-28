#include "Fixed.hpp"

// Chamado quando um objeto Fixed é criado sem nenhum argumento
Fixed::Fixed() {
	fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Chamado quando um objeto Fixed é destruído
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl; 
}

// Chamado quando um novo objeto Fixed é criado a partir de outro objeto Fixed e realiza a cópia do objeto number para o objeto atual
Fixed::Fixed(Fixed const &number) {
	std::cout << "Copy constructor called" << std::endl;
	*this = number;
}

// Retorna o valor _fixedPoint
int Fixed::getRawBits(void) const {
	return std::cout << "getRawBits member function called" << std::endl, _fixedPoint;
}

// Atribui o valor raw a _fixedPoint
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
}

// Este é o operador de atribuição de cópia da classe Fixed
// É chamado quando um objeto Fixed é atribuído a outro objeto Fixed
Fixed &Fixed::operator=(Fixed const &number) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &number)
		this->_fixedPoint = number.getRawBits();
	return *this;
}
