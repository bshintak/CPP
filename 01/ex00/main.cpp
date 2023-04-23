#include "Zombie.hpp"

int main() {
    // Cria um zumbi na heap e anuncia
    Zombie* zombie1 = newZombie("Zombie1");
    std::cout << std::endl;

    // Cria um zumbi na stack e anuncia
    Zombie zombie2("Zombie2");
    zombie2.announce();
    std::cout << std::endl;

    // Cria um zumbi aleatório na stack e anuncia
    randomChump("RandomZombie");
    std::cout << std::endl;

    // Libera a memória alocada na heap pelo zombie1
    delete zombie1;
    return 0;
}