#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap first("louis"); // clapTrap = Undefined / scavTrap = louis
    ScavTrap *second = new ScavTrap("harry");

    std::cout << "---------- 1 ----------" << std::endl;
    std::cout << first.getName() << std::endl;
    std::cout << second->getEnergyPoints() << std::endl;
    std::cout << "---------- 2 ----------" << std::endl;
    
    first.attack("ble");
    first.attack("ble");
    second->attack("ble");
    first.attack("ble");
    second->guardGate();
    std::cout << "---------- 3 ----------" << std::endl;
    second->takeDamage(10);
    std::cout << "---------- 4 ----------" << std::endl;
    delete second;
    std::cout << "---------- 5 ----------" << std::endl;
    second = &first;
    second->attack("ble");
    std::cout << "---------- 6 ----------" << std::endl;
    first.beRepaired(20);
    std::cout << "---------- 7 ----------" << std::endl;
    return 0;
}