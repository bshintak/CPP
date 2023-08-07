#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "../Brain.hpp"

class Dog : public Animal {
  public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &op);
    void  makeSound(void) const;
  private:
    Brain* _brain;
};

#endif