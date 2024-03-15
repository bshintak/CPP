#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
  public :
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack() {};
    ~MutantStack() {};
    MutantStack(const MutantStack& src) : std::stack<T>(src) {};
    MutantStack &operator=(const MutantStack &op) {
	    if (this != &op)
		    std::stack<T>::operator=(op);
	    return (*this);
    };

    iterator begin() {
      return (this->c.begin());
    };
    iterator end() {
      return (this->c.end());
    };
    const_iterator begin() const {
      return (this->c.begin());
    };
    const_iterator end() const {
      return (this->c.begin());
    };

};
