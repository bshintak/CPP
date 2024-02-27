#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
  std::cout << std::endl << RED << "--ShrubberyCreationForm--" << RESET << std::endl;
	// AForm *form = new AForm(); // classe abstrata
	{
		Bureaucrat highGrade("highGrade", 1);
		Bureaucrat lowGrade("lowGrade", 150);
		ShrubberyCreationForm shrubbery("Rabbit");
		std::cout << GREEN << shrubbery << RESET << std::endl;

		// form cannot be executed because its not signed
		std::cout << BLUE << "********************" << RESET << std::endl;
		shrubbery.execute(highGrade);
		std::cout << "----" << std::endl;
		highGrade.executeForm(shrubbery);
		std::cout << "----" << std::endl;
		lowGrade.executeForm(shrubbery);

		// sign the form
		std::cout << BLUE << "********************" << RESET << std::endl;
		highGrade.signForm(shrubbery);

		// execute form
		std::cout << BLUE << "********************" << RESET << std::endl;
	
		shrubbery.execute(lowGrade);
		std::cout << "----" << std::endl;
		shrubbery.execute(highGrade);
		std::cout << "----" << std::endl;
		highGrade.executeForm(shrubbery);

		std::cout << BLUE << "********************" << RESET << std::endl;
	}

	std::cout << std::endl << RED << "--RobotomyRequestForm--" << RESET << std::endl;
	{
		Bureaucrat highGrade("highGrade", 1);
		Bureaucrat lowGrade("lowGrade", 150);
		RobotomyRequestForm robotomy("Rabbit");
		std::cout << GREEN << robotomy << RESET << std::endl;

		// form cannot be executed because its not signed
		std::cout << BLUE << "********************" << RESET << std::endl;
		robotomy.execute(highGrade);
		std::cout << "----" << std::endl;
		highGrade.executeForm(robotomy);
		std::cout << "----" << std::endl;
		lowGrade.executeForm(robotomy);

		// sign the form
		std::cout << BLUE << "********************" << RESET << std::endl;
		highGrade.signForm(robotomy);

		// execute form
		std::cout << BLUE << "********************" << RESET << std::endl;
		robotomy.execute(lowGrade);
		std::cout << "----" << std::endl;
		robotomy.execute(highGrade);
		std::cout << "----" << std::endl;
		highGrade.executeForm(robotomy);

		std::cout << BLUE << "********************" << RESET << std::endl;
	}

	std::cout << std::endl << RED << "--PresidentialPardonForm--" << RESET << std::endl;

	{
		Bureaucrat highGrade("highGrade", 1);
		Bureaucrat lowGrade("lowGrade", 150);
		PresidentialPardonForm presidential("Rabbit");
		std::cout << GREEN << presidential << RESET << std::endl;

		// form cannot be executed because its not signed
		std::cout << BLUE << "********************" << RESET << std::endl;
		presidential.execute(highGrade);
		std::cout << "----" << std::endl;
		highGrade.executeForm(presidential);
		std::cout << "----" << std::endl;
		lowGrade.executeForm(presidential);

		// sign the form
		std::cout << BLUE << "********************" << RESET << std::endl;
		highGrade.signForm(presidential);

		// execute form
		std::cout << BLUE << "********************" << RESET << std::endl;
		presidential.execute(lowGrade);
		std::cout << "----" << std::endl;
		presidential.execute(highGrade);
		std::cout << "----" << std::endl;
		highGrade.executeForm(presidential);

		std::cout << BLUE << "********************" << RESET << std::endl;
	}

  return 0;
}