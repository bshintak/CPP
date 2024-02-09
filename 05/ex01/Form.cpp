#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeSign(150), _gradeExecute(150) {
    return ;
}

Form::Form(const std::string name, int gradeSign, int gradeExecute) : _name(name),  _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
    try {
        if (this->getGradeExecute() > 150 || this->getGradeSign() > 150)
            throw GradeTooLowException();
        else if (this->getGradeExecute() < 1 || this->getGradeSign() < 1)
            throw GradeTooHighException();
    }
    catch (const GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (const GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
    std::cout << "The form" << this->getName() << " has been created with " << this->getGradeSign() << " grade to sign and " << this->getGradeExecute() << " grade to execute." << std::endl;
    
}
Form::Form(const Form &copy) : _name(copy.getName()), _signed(copy.getSigned()), _gradeSign(copy.getGradeSign()), _gradeExecute(copy.getGradeExecute()) {
    *this = copy;
}

Form::~Form() {
    return ;
}

Form &Form::operator=(const Form &form) {
    if (this != &form)
        _signed = form._signed;
    return (*this);
}

const std::string Form::getName(void) const{
    return this->_name;
}

int Form::getGradeSign(void) const{
    return this->_gradeSign;
}  

int Form::getGradeExecute(void) const{
    return this->_gradeExecute;
}

bool Form::getSigned(void) const {
	return this->_signed;
}

void Form::setSigned(bool num) {
	this->_signed = num;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    try {
		if (this->getGradeSign() < bureaucrat.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return ;
	}
    if (bureaucrat.getGrade() <= this->getGradeSign()) {
        this->_signed = true;
        std::cout << "<" << this->getName() << "> is signed by <" << bureaucrat.getName() << ">" << std::endl;
    }
}

std::ostream	&operator<<(std::ostream &os, const Form &form) {
	os << "[" << form.getName() << "]" << std::endl;
	os << "\t" << "signed : " << form.getGradeSign() << std::endl;
	os << "\t" << "grade needed to sign : " << form.getGradeSign() << std::endl;
	os << "\t" << "grade needed to execute : " << form.getGradeExecute() << std::endl;
    if (form.getSigned())
		os << "Form <" << form.getName() << "> is signed.";
	else
		os << "Form <" << form.getName() << "> is not signed.";
	return (os);
};
