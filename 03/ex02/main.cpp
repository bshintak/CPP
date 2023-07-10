#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
   FragTrap *c = new FragTrap("harry");
   ScavTrap *s = new ScavTrap("louis");
   ClapTrap *x = new ClapTrap("zayn");
   
   std::cout << "---------- 1 ----------" << std::endl;
   c->attack("ble");
   s->attack("ble");
   std::cout << "---------- 2 ----------" << std::endl;
   s->guardGate();
   std::cout << "---------- 3 ----------" << std::endl;
   c->highFivesGuys();
   std::cout << "---------- 4 ----------" << std::endl;
   c->takeDamage(40);
   std::cout << "---------- 5 ----------" << std::endl;
   c->beRepaired(25);
   std::cout << "---------- 6 ----------" << std::endl;
   delete c;
   delete s;

   return 0;
}