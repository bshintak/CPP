#ifndef FRAG_TRAP
#define FRAG_TRAP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap(const std::string name);
        ~FragTrap();
        FragTrap & operator=(const FragTrap &copy);
        void    attack( const std::string& target );
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    highFivesGuys();
};
#endif 