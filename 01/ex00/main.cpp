#include "Zombie.hpp"

int main() {
    // Cria um zumbi na heap e anuncia
    Zombie *zombie = newZombie("Foo");

    // Anuncia o zumbi criado
    zombie->announce();
    std::cout << std::endl;

    // Cria um zumbi aleatório na stack e anuncia
    randomChump("RandomZombie");
    std::cout << std::endl;

    // Libera a memória alocada na heap pelo zombie1
    delete zombie;
    return 0;
}