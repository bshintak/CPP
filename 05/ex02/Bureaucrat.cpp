#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "name: " << name << std::endl;
	std::cout << "grade: " << grade << std::endl;
	try {
		std::cout << "try" << std::endl;
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException & e) {
		std::cout << "catch 1" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException & e) {
		std::cout << "catch 2" << std::endl;
		std::cout << e.what() << std::endl;
	}
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	std::cout << "2" << std::endl;
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy) {
	std::cout << "3" << std::endl;
	if (this != &copy)
		this->_grade = copy._grade;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    std::cout << "4" << std::endl;
		os << "Bureaucrat: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade();
    return os;
}

std::string	Bureaucrat::getName(void) const {
	return (_name);
}

int Bureaucrat::getGrade(void) const {
  return (_grade);
}

void Bureaucrat::gradeOneDown(void) {
  try {
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return;
	}
	_grade++;
}

void Bureaucrat::gradeOneUp(void) {
  try {
		if(_grade < 1)
    	throw GradeTooHighException();
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
		return;
	}
  _grade--;
}

void Bureaucrat::signForm(Form &form) {
	if (form.getGradeSign() >= this->getGrade())
	{
		form.setSigned(true);
		std::cout << "<" << this->getName() << "> signed <" << form.getName() << ">" << std::endl;
	}
	else
		std::cout << "<" << this->getName() << "> couldn’t sign <" << form.getName() << "> because <the bureaucrat's grade is lower than the form's grade to sign>" << std::endl;
}

/*---------- NEW ----------*/
void Bureaucrat::executeForm(const Form &form) {

	if (!form.checkFormSignedStatus())
		std::cout << "<" << form.getName() << "> cannot be executed by <" << this->getName() << "> because the form is not signed." << std::endl;

	else if (!form.checkFormExecuteGrade(*this))
		std::cout << "<" << form.getName() << "> cannot be executed by <" << this->getName() << "> because the executor does not have a high enough score." << std::endl;

	else {
		std::cout << "<" << this->getName() << "> executed <" << form.getName() << ">." << std::endl;
		form.executeForm();
	}
}