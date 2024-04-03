#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Wrong number of parameters" << std::endl;
    return -1;
  }

	std::string expression = av[1];

  if (checkLine(expression)) {
    std::cerr << "Error: Invalid argument" << std::endl;
    return -1;
  }
	displayResult(expression);
	
  return 0;
}