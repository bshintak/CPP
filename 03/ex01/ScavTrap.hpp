#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

# define HITPOINT " is dead..."
# define ENERGYPOINT " doesn't have enough energy.."

class ScavTrap {
  public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    void  attack(const std::string& target);
    void  takeDamage(unsigned int amount);
    void  beRepaired(unsigned int amount);
    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
  private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif