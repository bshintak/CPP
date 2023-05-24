#include "Zombie.hpp"

void    Zombie::setName(std::string name) {
    this->_name = name;   
}

Zombie* newZombie(std::string name) {
    // Cria o zombie
    Zombie *zombie = new Zombie;
    // Da um nome pra ele
    zombie->setName(name);
    // Retorna
    return zombie;
}
