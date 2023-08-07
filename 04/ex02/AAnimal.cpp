#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
  std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::~AAnimal() {
  std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& copy) {
	std::cout << "AAnimal: Copy constructor called!" << std::endl;
	*this = copy;
}

AAnimal&	AAnimal::operator=(AAnimal const& op) {
	if (this != &op)
		this->_type = op._type;
  std::cout << "AAnimal: Copy assignment operator called" << std::endl;
	return *this;
}

void  AAnimal::makeSound(void) const {
  std::cout << "SHSHSHSHSHSHSHSHSH" << std::endl;
}

std::string AAnimal::getType(void) const {
  return this->_type;
}