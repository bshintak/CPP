#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5){
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("presidential pardon", 25, 5)
{
	this->setFormTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.getName(), src.getGradeSign(), src.getGradeExecute()){
	std::cout << "<PresidentialPardonForm> copy constructor is called." << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	if (this != &rhs)
	{
		this->setSigned(rhs.getSigned());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void PresidentialPardonForm::executeForm() const {
	std::cout << this->getFormTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}