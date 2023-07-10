#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    this->_hitPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap: Default constructor called with name: " << this->_name << std::endl;
    return;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap: Destructor called with name: " << this->_name << std::endl;
  return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "FragTrap: Constructor called with name: " << this->_name << std::endl;   
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
    *this = copy;
    std::cout << "FragTrap: Copy constructor called with name: " << this->_name << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap &copy) {
    if (this == &copy)
        return *this;
    this->_hitPoints = copy.getHitPoints();
    this->_energyPoints = copy.getEnergyPoints();
    this->_attackDamage = copy.getAttackDamage();
    std::cout << "FragTrap: Copy assignment operator called with name: " << this->_name << std::endl;
    return *this;
}

/*---------- NEW ----------*/
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap: " << this->_name << " gives high fives!!" << std::endl;
}
/*------------------------*/

// Attack Function
void    FragTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap: " << this->_name << " can't attack, " << this->_name << " doesn't have enough hit point." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "FragTrap: " << this->_name << " can't attack, " << this->_name << " doesn't have enough energy point." << std::endl;
    else
    {
        std::cout << "FragTrap: " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

// Take Damage Function
void    FragTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap: " << this->_name << " is already dead.." << std::endl;
    else
    {
        std::cout << "FragTrap " << this->_name << " with " << this->_hitPoints << " hit point(s), take " << amount << " of damage!" << std::endl;
        this->_hitPoints -= amount;
        std::cout << "FragTrap " << this->_name << "has " << this->_hitPoints << " hit point(s) now" << std::endl;
    }
}

// Be Repaired Function
void    FragTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap: " << this->_name << " can't be repaired, " << this->_name << HITPOINT << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "FragTrap: " << this->_name << " can't be repaired, " << this->_name << ENERGYPOINT << std::endl;
    else
    {
        std::cout << "FragTrap: " << this->_name << " repaired " << amount << " hit points!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}
