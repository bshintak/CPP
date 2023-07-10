#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
  std::cout << "DiamondTrap: Default constructor called"<< std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap: Destructor called with name: " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	this->_name = name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	this->_energyPoints = ScavTrap::getEnergyPoints();
  std::cout << "DiamondTrap: Constructor called with name: " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
    *this = copy;
    std::cout << "DiamondTrap: Copy constructor called with name: " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this == &copy)
        return *this;
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    std::cout << "DiamondTrap: Copy assignment operator called with name: " << this->_name << std::endl;
    return *this;
}

void	DiamondTrap::attack(std::string const& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}
