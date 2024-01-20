#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  std::cout << std::endl << "--ShrubberyCreationForm--" << std::endl;

	{
		Bureaucrat highGrade("highGrade", 1);
		Bureaucrat lowGrade("lowGrade", 150);
		ShrubberyCreationForm shrubbery("Rabbit");
		std::cout << shrubbery << std::endl;

		// form cannot be executed because its not signed
		std::cout << "----" << std::endl;
		shrubbery.execute(highGrade);
		highGrade.executeForm(shrubbery);
		lowGrade.executeForm(shrubbery);

		// sign the form
		std::cout << "----" << std::endl;
		highGrade.signForm(shrubbery);

		// execute form
		std::cout << "----" << std::endl;
		shrubbery.execute(lowGrade);
		shrubbery.execute(highGrade);
		highGrade.executeForm(shrubbery);

		std::cout << "----" << std::endl;
	}
  return 0;
}