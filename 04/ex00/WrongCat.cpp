#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  this->_type = "WrongCat";
  std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy) {
	std::cout << "WrongCat: Copy constructor called!" << std::endl;
	*this = copy;
}

WrongCat&	WrongCat::operator=(WrongCat const& op) {
	if (this != &op)
		this->_type = op._type;
  std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	return *this;
}

void  WrongCat::makeSound(void) const {
  std::cout << "UUUUUUUUUUUUAIM" << std::endl;
}

std::string WrongCat::getType(void) const {
  return this->_type;
}
