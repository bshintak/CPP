#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
  public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(std::string name);
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &op);
    void  makeSound(void) const;
    std::string getType(void) const;
  protected:
    std::string _type;
};

#endif