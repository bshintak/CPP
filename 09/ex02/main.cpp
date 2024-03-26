#include "PmergeMe.hpp"

int isValid(char** args, int argc) {
  for (int i = 0; i < argc - 1; ++i) {
    for (char* ch = args[i]; *ch; ++ch){
      if (*ch < '0' || *ch > '9') {
        return -1;
      }
    }
  }
  return 0;
}

int main(int ac, char **av) {
  if (ac == 1) {
    std::cout << "Error: Wrong arguments!" << std::endl;
    return 0;
  }
  if (isValid(&av[1], ac) == -1) {
    std::cout << "Error: Invalid arguments!" << std::endl;
    return 0;
  }
  PmergeMe p;
  p.sortList(&av[1], ac - 1);
  return 0;
}