#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	dummy("Batata");

	dummy.attack("gun");
	dummy.whoAmI();
	return (0);
}
