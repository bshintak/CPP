#include "Zombie.hpp"

int main() {
    Zombie *zombie;
    int num = 5;
    zombie = zombieHorde(num, "zombieeee");
    if (num > 0) {
    	for (int i = 0; i < num; i++) {
			  zombie[i].announce();
		  }
    }
	delete [] zombie;
}