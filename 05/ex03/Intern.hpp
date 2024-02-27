#ifndef INTERN_HPP
#define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class 	Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern &operator=(Intern const &rhs);

		AForm *makeForm(std::string formName, std::string target);
		
		class FormNotFoundException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:
		std::string _forms[3];
};

#endif