#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
  std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name) {
  std::cout << "WrongAnimal: Constructor called with name: " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy) {
	std::cout << "WrongAnimal: Copy constructor called!" << std::endl;
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& op) {
	if (this != &op)
		this->_type = op._type;
  std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	return *this;
}

void  WrongAnimal::makeSound(void) const {
  std::cout << "ZZZZZZZZZZZZZZZZZZ" << std::endl;
}

std::string WrongAnimal::getType(void) const {
  return this->_type;
}