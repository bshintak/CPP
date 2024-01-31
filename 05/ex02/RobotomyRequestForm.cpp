#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45){
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45) {
	this->setFormTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.getName(), src.getGradeSign(), src.getGradeExecute()){
	std::cout << "<RobotomyRequestForm> copy constructor is called." << std::endl;
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (this != &rhs)
	{
		this->setSigned(rhs.getSigned());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void RobotomyRequestForm::executeForm() const {

	std::cout << "Drilling noises..." << std::endl;
	srand(time(NULL));
	int ret = rand() % 2;
	if (ret)
		std::cout << "<" << this->getFormTarget() << "> has been robotomized successfully." << std::endl;
	else
		std::cout << "The executor failed to robotomize <" << this->getFormTarget() << ">." << std::endl;
}