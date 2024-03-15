#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
  MutantStack();
  MutantStack(const MutantStack& src);
  ~MutantStack();

};
