#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  std::cout << "\n\033[35m---------- SUBJECT TEST ----------\033[m\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

  std::cout << "\n\033[35m---------- WRONG CAT ----------\033[m\n" << std::endl;
    const WrongAnimal* metaWrong = new WrongAnimal();
	  const Animal* jWrong = new Dog();
	  const WrongAnimal* iWrong = new WrongCat();

	  std::cout << jWrong->getType() << " " << std::endl;
	  std::cout << iWrong->getType() << " " << std::endl;

	  iWrong->makeSound();
	  jWrong->makeSound();
	  metaWrong->makeSound();

	  delete metaWrong;
	  delete jWrong;
	  delete iWrong;

  std::cout << "\n\033[35m---------- Copy constructor and Copy assignment operator ----------\033[m\n" << std::endl;
    std::cout << "\n\033[32mAnimal from Animal class:\033[m" << std::endl;

	  const Animal *animal0 = new Animal(); // animal destructor
	  const Animal animal1(*animal0); // animal destructor (final)
	  Animal *animal2 = new Animal(); // animal destructor
	  *animal2 = animal1;

	  animal0->makeSound();
    animal1.makeSound();
	  animal2->makeSound();

	  delete animal0;
	  delete animal2;

	  std::cout << "\n\033[32mAnimal from Dog class:\033[m" << std::endl;
	  const Animal* dog0 = new Dog(); // dog destructor e animal destructor
	  const Animal dog1(*dog0); // animal destructor (final)
	  Animal* dog2 = new Dog(); // dog destructor e animal destructor
	  *dog2 = dog1;

	  dog0->makeSound();
	  dog1.makeSound();
	  dog2->makeSound();

	  delete dog0;
	  delete dog2;

    std::cout << "\n\033[32mAnimal from Cat class:\033[m" << std::endl;
	  const Animal* cat0 = new Cat(); // cat destructor e animal destructor
	  const Animal cat1(*cat0); // animal destructor (final)
	  Animal* cat2 = new Cat(); // cat destructor e animal destructor
	  *cat2 = cat1;

	  cat0->makeSound();
	  cat1.makeSound();
	  cat2->makeSound();

	  delete cat0;
	  delete cat2;


	  std::cout << "\n\033[32mDog from Dog class:\033[m" << std::endl;
	  const Dog* dog3 = new Dog(); // dog destructor e animal destructor
	  const Dog dog4(*dog3); // dog destructor e animal destructor (final)
	  Dog* dog5 = new Dog(); // dog destructor e animal destructor
	  *dog5 = dog4;

	  dog3->makeSound();
	  dog4.makeSound();
	  dog5->makeSound();

	  delete dog3;
	  delete dog5;

    std::cout << "\n\033[32mCat from Cat class:\033[m" << std::endl;
	  const Cat* cat3 = new Cat(); // cat destructor e animal destructor
	  const Cat cat4(*cat3); // cat destructor e animal destructor (final)
	  Cat* cat5 = new Cat(); // cat destructor e animal destructor
	  *cat5 = cat4;

	  cat3->makeSound();
	  cat4.makeSound();
	  cat5->makeSound();

	  delete cat3;
	  delete cat5;

	std::cout << "--------------------------------" << std::endl;
  return 0;
}