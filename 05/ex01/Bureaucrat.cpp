#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "name: " << name << std::endl;
	std::cout << "grade: " << grade << std::endl;
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy)  : _name(copy.getName()), _grade(copy.getGrade()) {
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy)
		this->_grade = copy._grade;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
		os << "Bureaucrat: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade();
    return os;
}

std::string	Bureaucrat::getName(void) const {
	return (_name);
}

int Bureaucrat::getGrade(void) const {
  return (_grade);
}

void Bureaucrat::setGrade(int grade) {
	this->_grade = grade;
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

/*---------- NEW ----------*/

void Bureaucrat::signForm(Form &form) {
	if (form.getGradeSign() >= this->getGrade())
	{
		form.setSigned(true);
		std::cout << "<" << this->getName() << "> signed <" << form.getName() << ">" << std::endl;
	}
	else
		std::cout << "<" << this->getName() << "> couldn’t sign <" << form.getName() << "> because <the bureaucrat's grade is lower than the form's grade to sign>" << std::endl;
}