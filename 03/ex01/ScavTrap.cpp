#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->setName("Undefined");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << SUN << "ScavTrap default constructor called for " << this->_name << "." << std::endl;
    return;
}