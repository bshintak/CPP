#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
  public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &op);
    void  makeSound(void) const;
    std::string getType(void) const;
  protected:
    std::string _type;
};

#endif