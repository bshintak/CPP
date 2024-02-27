#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _gradeSign(150), _gradeExecute(150) {
    return ;
}

AForm::AForm(const std::string name, int gradeSign, int gradeExecute) : _name(name),  _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
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
    std::cout << "The AForm" << this->getName() << " has been created with " << this->getGradeSign() << " grade to sign and " << this->getGradeExecute() << " grade to execute." << std::endl;
    
}
AForm::AForm(const AForm &copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute) {
    *this = copy;
}

AForm::~AForm() {
    return ;
}

AForm &AForm::operator=(const AForm &AForm) {
    if (this != &AForm)
        _signed = AForm._signed;
    return (*this);
}

std::ostream	&operator<<(std::ostream &o, const AForm &AForm)
{
	o << "[" << AForm.getName() << "]" << std::endl;
	o << "\t" << "signed : " << AForm.getGradeSign() << std::endl;
	o << "\t" << "grade needed to sign : " << AForm.getGradeSign() << std::endl;
	o << "\t" << "grade needed to execute : " << AForm.getGradeExecute() << std::endl;
	return (o);
};

const std::string AForm::getName(void) const{
    return this->_name;
}

int AForm::getGradeSign(void) const{
    return this->_gradeSign;
}  

int AForm::getGradeExecute(void) const{
    return this->_gradeExecute;
}

bool AForm::getSigned() const {
	return this->_signed;
}

void AForm::setSigned(bool num) {
	this->_signed = num;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    try {
		if (this->getGradeSign() < bureaucrat.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return ;
	}
    if (bureaucrat.getGrade() <= this->getGradeSign())
        this->_signed = true;
}

/*---------- NEW ----------*/

void AForm::setFormTarget(std::string target) {
	this->_target = target;
}

std::string AForm::getFormTarget() const {
	return this->_target;
}

void AForm::execute(const Bureaucrat &executor) const {
	if (!this->checkFormSignedStatus())
		std::cout << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the AForm is not signed." << std::endl;
	else if (!this->checkFormExecuteGrade(executor))
		std::cout << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the executor does not have a high enough score." << std::endl;
	else
		executeForm();
}

bool AForm::checkFormSignedStatus(void) const {

	if (this->getSigned())
		return true;
	return false;
}

bool AForm::checkFormExecuteGrade(const Bureaucrat &executor) const {
	try
	{
		if (this->getGradeExecute() < executor.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
		return false;
	}
	return true;
}