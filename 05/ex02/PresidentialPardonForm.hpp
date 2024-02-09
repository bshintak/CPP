#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {

private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

//	virtual void execute(Bureaucrat const & executor) const;
	virtual void executeForm() const;

};

#endif 