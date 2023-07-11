#include "Dog.hpp"

Dog::Dog() : Animal() {
  this->_type = "Dog";
  std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog: Destructor called" << std::endl;
}

Dog::Dog(Dog const& copy): Animal(copy) {
	std::cout << "Dog: Copy constructor called!" << std::endl;
	*this = copy;
}

Dog&	Dog::operator=(Dog const& op) {
	if (this != &op)
		this->_type = op._type;
  std::cout << "Dog: Copy assignment operator called" << std::endl;
	return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "AU AU AUUUUUUUU" << std::endl;
}

std::string Dog::getType(void) const {
  return this->_type;
}
