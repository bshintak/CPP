#include "Zombie.hpp"

void    randomChump(std::string name) {
    // cria o zombie
    Zombie zombie;
    // Da um nome para ele
    zombie.setName(name);
    // O zombie anuncia ele mesmo
    zombie.announce();
}
