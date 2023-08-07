#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "../Brain.hpp"

class Cat : public Animal {
  public:
    Cat();
    ~Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &op);
    void  makeSound(void) const;
  private:
    Brain* _brain;
};

#endif