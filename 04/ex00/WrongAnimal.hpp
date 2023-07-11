#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
  public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &op);
    virtual void  makeSound(void) const;
    virtual std::string getType(void) const;
  protected:
    std::string _type;
};

#endif