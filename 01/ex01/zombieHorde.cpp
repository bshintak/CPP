#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  	if (N > 0) {
    	Zombie *zombie = new Zombie[N];
		if (!name.empty()) {
			for (int i = 0; i < N; i++) {
				zombie[i].setName(name);
			}
		}
		return zombie;
  	}
	return NULL;
}