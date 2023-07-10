#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(): _name("Undefined"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Default constructor called with name: " << this->_name << std::endl;
  return ;
}

// Destructor
ClapTrap::~ClapTrap() {
  std::cout << "Destructor called with name: " << this->_name << std::endl;
  return ;
}

// Constructor with name
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Constructor called with name: "<< this->_name << std::endl;
  return ;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "Copy constructor called with name: " << this->_name << std::endl;
    return ;
}

// Operator
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this == &copy)
        return *this;
    this->_name = copy.getName();
    this->_hitPoints = copy.getHitPoints();
    this->_energyPoints = copy.getEnergyPoints();
    this->_attackDamage = copy.getAttackDamage();
    std::cout << "Copy assignment operator called with name: " << this->_name << std::endl;
    return *this;
}

/*---------- Get something ----------*/
std::string ClapTrap::getName() const {
  return this->_name;
}

int ClapTrap::getHitPoints() const {
  return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const {
  return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const {
  return this->_attackDamage;
}
/*-----------------------------------*/

// Attack Function
void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap: " << this->_name << " can't attack, " << this->_name << " doesn't have enough hit point." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap: " << this->_name << " can't attack, " << this->_name << " doesn't have enough energy point." << std::endl;
    else
    {
        std::cout << "ClapTrap: " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

// Take Damage Function
void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap: " << this->_name << " is already dead.." << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " with " << this->_hitPoints << " hit point(s), take " << amount << " of damage!" << std::endl;
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << "has " << this->_hitPoints << " hit point(s) now" << std::endl;
    }
}

// Be Repaired Function
void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap: " << this->_name << " can't be repaired, " << this->_name << HITPOINT << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap: " << this->_name << " can't be repaired, " << this->_name << ENERGYPOINT << std::endl;
    else
    {
        std::cout << "ClapTrap: " << this->_name << " repaired " << amount << " hit points!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}
