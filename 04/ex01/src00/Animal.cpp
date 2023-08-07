#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
  std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(Animal const& copy) {
	std::cout << "Animal: Copy constructor called!" << std::endl;
	*this = copy;
}

Animal&	Animal::operator=(Animal const& op) {
	if (this != &op)
		this->_type = op._type;
  std::cout << "Animal: Copy assignment operator called" << std::endl;
	return *this;
}

void  Animal::makeSound(void) const {
  std::cout << "SHSHSHSHSHSHSHSHSH" << std::endl;
}

std::string Animal::getType(void) const {
  return this->_type;
}