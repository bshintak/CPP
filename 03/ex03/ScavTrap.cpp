#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    this->_energyPoints = 50;
    std::cout << "ScavTrap: Default constructor called with name: " << this->_name << std::endl;
    return;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap: Destructor called with name: " << this->_name << std::endl;
  return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap: Constructor called with name: " << this->_name << std::endl;   
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
    *this = copy;
    std::cout << "ScavTrap: Copy constructor called with name: " << this->_name << std::endl;
    return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this == &copy)
        return *this;
    this->_hitPoints = copy.getHitPoints();
    this->_energyPoints = copy.getEnergyPoints();
    this->_attackDamage = copy.getAttackDamage();
    std::cout << "ScavTrap: Copy assignment operator called with name: " << this->_name << std::endl;
    return *this;
}

/*---------- NEW ----------*/
void ScavTrap::guardGate(){
    std::cout << "ScavTrap: " << this->_name << " is now in Gate keeper mode" << std::endl;
}
/*------------------------*/

// Attack Function
void    ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap: " << this->_name << " can't attack, " << this->_name << " doesn't have enough hit point." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ScavTrap: " << this->_name << " can't attack, " << this->_name << " doesn't have enough energy point." << std::endl;
    else
    {
        std::cout << "ScavTrap: " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

// Take Damage Function
void    ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap: " << this->_name << " is already dead.." << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->_name << " with " << this->_hitPoints << " hit point(s), take " << amount << " of damage!" << std::endl;
        this->_hitPoints -= amount;
        std::cout << "ScavTrap " << this->_name << "has " << this->_hitPoints << " hit point(s) now" << std::endl;
    }
}

// Be Repaired Function
void    ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap: " << this->_name << " can't be repaired, " << this->_name << HITPOINT << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ScavTrap: " << this->_name << " can't be repaired, " << this->_name << ENERGYPOINT << std::endl;
    else
    {
        std::cout << "ScavTrap: " << this->_name << " repaired " << amount << " hit points!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}
