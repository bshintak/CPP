#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
  public:
    Brain();
    ~Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &op);
  private:
    std::string _ideas[100];
};

#endif