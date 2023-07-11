#include "Cat.hpp"

Cat::Cat() : Animal() {
  this->_type = "Cat";
  std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat: Destructor called" << std::endl;
}

Cat::Cat(Cat const& copy) : Animal(copy) {
	std::cout << "Cat: Copy constructor called!" << std::endl;
	*this = copy;
}

Cat&	Cat::operator=(Cat const& op) {
	if (this != &op)
		this->_type = op._type;
  std::cout << "Cat: Copy assignment operator called" << std::endl;
	return *this;
}

void  Cat::makeSound(void) const {
  std::cout << "MIAUUUUUUUUUUUU" << std::endl;
}

std::string Cat::getType(void) const {
  return this->_type;
}
