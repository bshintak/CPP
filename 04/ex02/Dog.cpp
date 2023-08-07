#include "Dog.hpp"

Dog::Dog() : AAnimal() {
  this->_type = "Dog";
  this->_brain = new Brain();
  std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::~Dog() {
  delete this->_brain;
  std::cout << "Dog: Destructor called" << std::endl;
}

Dog::Dog(Dog const& copy): AAnimal(copy) {
	this->_brain = new Brain();
	std::cout << "Dog: Copy constructor called!" << std::endl;
	*this = copy;
}

Dog&	Dog::operator=(Dog const& op) {
	*(this->_brain) = *(op._brain);
  std::cout << "Dog: Copy assignment operator called" << std::endl;
	return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "AU AU AUUUUUUUU" << std::endl;
}
