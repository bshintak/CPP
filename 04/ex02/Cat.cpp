#include "Cat.hpp"

Cat::Cat() : AAnimal() {
  this->_type = "Cat";
  this->_brain = new Brain();
  std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::~Cat() {
  delete this->_brain;
  std::cout << "Cat: Destructor called" << std::endl;
}

Cat::Cat(Cat const& copy) : AAnimal(copy) {
  this->_brain = new Brain();
	std::cout << "Cat: Copy constructor called!" << std::endl;
	*this = copy;
}

Cat&	Cat::operator=(Cat const& op) {
	*(this->_brain) = *(op._brain);
  std::cout << "Cat: Copy assignment operator called" << std::endl;
	return *this;
}

void  Cat::makeSound(void) const {
  std::cout << "MIAUUUUUUUUUUUU" << std::endl;
}
