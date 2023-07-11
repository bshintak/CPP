#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
  public:
    Cat();
    ~Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &op);
    void  makeSound(void) const;
    std::string getType(void) const;
  protected:
    std::string _type;
};

#endif