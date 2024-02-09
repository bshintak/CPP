#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	// create bureaucrats and forms
	Bureaucrat jim("jim", 50);
	Bureaucrat tom("tom", 100);

	Form badForm("bad", 10, 200);
	Form goodForm("good", 80, 100);

	std::cout << badForm << std::endl;
	std::cout << goodForm << std::endl;

	// test beSigned() function
	std::cout << "---" << std::endl;

	std::cout << "Tom - goodForm : ";
	goodForm.beSigned(tom); // can't sign
	std::cout << "Tom - badForm : ";
	badForm.beSigned(tom); // can't sign
	std::cout << "Jim - goodForm : ";
	goodForm.beSigned(jim); // can sign
	std::cout << "Jim - badForm : ";
	badForm.beSigned(jim); // can't sign

	// test signForm() function
	std::cout << "---" << std::endl;

	tom.signForm(goodForm); // can't sign
	tom.signForm(badForm); //
	jim.signForm(goodForm); // can sign
	jim.signForm(badForm); //

	std::cout << "---" << std::endl;

	std::cout << badForm << std::endl;
	std::cout << goodForm << std::endl;

	std::cout << "---" << std::endl;

	return 0;
}