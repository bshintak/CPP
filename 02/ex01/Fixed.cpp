#include "Fixed.hpp"

// Chamado quando um objeto Fixed é criado sem nenhum argumento
Fixed::Fixed(): _fixedPoint(0) {
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

/* ---------- NEW ---------- */

// exemplo: _fixedPoint = 4 / value = 2 (1 << 4 = 2 potencia de 4 = 16), depois multiplica pelo value = 32 
Fixed::Fixed(const int value): _fixedPoint(value * (1 << _fractionalBits)) {
	std::cout << "Int constructor called" << std::endl;
}
// roundf arredonda para o inteiro mais proximo para poder armazenar no _fixedPoint (int)
Fixed::Fixed(const float value): _fixedPoint(roundf(value * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

// converter para um float
float Fixed::toFloat(void) const {
	return (float)_fixedPoint / (1 << _fractionalBits);
}

// converter para um int
int Fixed::toInt(void) const {
	return(_fixedPoint >> _fractionalBits);
}

// std::ostream representa o fluxo de saida
// const Fixed -> objeto que sera impresso
// ao usar o operador << com um objeto da classe Fixed, ele chamará essa função
std::ostream& operator<<(std::ostream& out, const Fixed& obj) {
	return(out << obj.toFloat()); //insere o valor em ponto flutuante no fluxo de saida
}
