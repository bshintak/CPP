#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form {

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