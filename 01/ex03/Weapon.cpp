#include "Weapon.hpp"

Weapon::Weapon(std::string typeWeapon) : _type(typeWeapon) {}

Weapon::~Weapon() {}

std::string const &Weapon::getType(void) const
{
    return this->_type;    
}

void Weapon::setType(std::string const &typeWeapon)
{
    this->_type = typeWeapon;
} 