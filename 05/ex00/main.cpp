#include "Bureaucrat.hpp"

int main() {
	Bureaucrat tooHigh("tooHigh", 0);
	Bureaucrat tooLow("tooLow", 160);
	Bureaucrat limit("limit", 1);

	// test grade change (within range)
	std::cout << "----" << std::endl;
	Bureaucrat okay("okay", 100);
	std::cout << okay << std::endl;
	okay.gradeOneUp();
	std::cout << okay << std::endl;
	okay.gradeOneDown();
	std::cout << okay << std::endl;

	// test grade change (out of range)
	std::cout << "----" << std::endl;
	limit.gradeOneUp();
	std::cout << limit << std::endl;
	limit.gradeOneDown();
	std::cout << limit << std::endl;

	// test copy & assignation operator
	std::cout << "----" << std::endl;
	Bureaucrat copy = Bureaucrat(tooHigh);
	std::cout << copy << std::endl;

	// objects are destructed automatically
	std::cout << "----" << std::endl;

	return 0;
}