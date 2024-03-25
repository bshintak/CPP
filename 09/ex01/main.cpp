#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Wrong number of paramters" << std::endl;
    return -1;
  }

	std::string expression = av[1];
  // std::string subject1 = "8 9 * 9 - 9 - 9 - 4 - 1 +";
  // std::string subject2 = "7 7 * 7 -";
  // std::string subject3 = "1 2 * 2 / 2 * 2 4 - +";
  // std::string subject4 = "(1 + 1)";

  if (expression.find_first_not_of(" 1234567890+-*/") != std::string::npos) {
    std::cerr << "Error" << std::endl;
    return -1;
  }

	displayResult(expression);
	// displayResult(subject1);
	// displayResult(subject2);
	// displayResult(subject3);
	// displayResult(subject4);
	
  return 0;
}