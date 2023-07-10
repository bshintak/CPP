#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap(const std::string name);
        DiamondTrap & operator=(const DiamondTrap &copy);
        void  attack( const std::string& target );
        void  whoAmI(void) const;
    private:
        std::string _name;
        int _hitPoints;
        int _attackDamage;
        int _energyPoints;
};
#endif 