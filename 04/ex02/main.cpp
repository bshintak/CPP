#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	AAnimal *tab[4];
	// AAnimal animal; // nao posso criar
	
	for (int i = 0 ; i < 4 ; i++) {
		if (i < 2)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
		tab[i]->getType();
		tab[i]->makeSound();
        std::cout << "------------------------" << std::endl;
	}
  for (int i = 0 ; i < 4 ; i++) {
      delete tab[i];
  }
	
	// std::cout << "\033[32m\n--------------- DEEP COPIES ---------------\033[m\n" << std::endl;
  // std::cout << "\033[35m------------------- CAT -------------------\033[m" << std::endl;
  // Cat a;
  // std::cout << "\033[32m-------------------------------------------\033[m" << std::endl;
	// Cat b(a);
  // std::cout << "\033[32m-------------------------------------------\033[m" << std::endl;
  // Cat c = b;
  // std::cout << "\033[35m------------------- DOG -------------------\033[m" << std::endl;
  // Dog d;
  // std::cout << "\033[32m-------------------------------------------\033[m" << std::endl;
	// Dog e(d);
  // std::cout << "\033[32m-------------------------------------------\033[m" << std::endl;
  // Dog f = e;
  // std::cout << "\033[32m-------------------------------------------\033[m" << std::endl;
	
	return 0;
}
