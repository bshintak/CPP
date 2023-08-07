#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &copy);
    Animal &operator=(const Animal &op);
    virtual void  makeSound(void) const;
    std::string getType(void) const;
  protected:
    std::string _type;
};

#endif