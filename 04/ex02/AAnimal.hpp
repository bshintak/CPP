#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
  public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &copy);
    AAnimal &operator=(const AAnimal &op);
    virtual void  makeSound(void) const = 0;
    std::string getType(void) const;
  protected:
    std::string _type;
};

#endif