#include "ClapTrap.hpp"

int main() {
  ClapTrap  noName;
  ClapTrap  withName("Pablo");
  ClapTrap  withName2("Roberta");
  ClapTrap  withName3(withName2);

  withName2 = withName;
  std::cout << "---------------------------" << std::endl;
  noName.attack("Roger");
  noName.takeDamage(100);
  noName.beRepaired(30);
  std::cout << "---------------------------" << std::endl;
  withName.attack("Jose");
  withName.takeDamage(4);
  withName.beRepaired(2);
  std::cout << "---------------------------" << std::endl;
  withName3.attack("Barbara");
  withName3.takeDamage(4);
  withName3.beRepaired(2);
}