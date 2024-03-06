#include "Bureaucrat.hpp"

int main() {
	Bureaucrat tooHigh("tooHigh", 0);
	Bureaucrat tooLow("tooLow", 160);
	Bureaucrat limit("limit", 1);
	Bureaucrat limit2("limit2", 150);

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
	limit.gradeOneUp();
	std::cout << limit << std::endl;
	std::cout << "----" << std::endl;
	limit2.gradeOneDown();
	std::cout << limit2 << std::endl;
	limit2.gradeOneDown();
	std::cout << limit2 << std::endl;

	// test copy & assignation operator
	std::cout << "----" << std::endl;
	Bureaucrat copy = Bureaucrat(okay);
	std::cout << copy << std::endl;

	std::cout << "----" << std::endl;

	// std::cout << okay.getGrade() << std::endl;
	// std::cout << okay.getName() << std::endl;

	return 0;
}