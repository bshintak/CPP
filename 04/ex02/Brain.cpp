#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::~Brain() {
  std::cout << "Brain: Destructor called" << std::endl;
}

Brain::Brain(Brain const& copy) {
	std::cout << "Brain: Copy constructor called!" << std::endl;
	*this = copy;
}

Brain&	Brain::operator=(Brain const& op) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = op._ideas[i];
  std::cout << "Brain: Copy assignment operator called" << std::endl;
	return *this;
}
