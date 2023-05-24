#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack() const
{
    if (this->_weapon)
		std::cout << this->_name << " attacks with weapon " << _weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon " << std::endl;
}