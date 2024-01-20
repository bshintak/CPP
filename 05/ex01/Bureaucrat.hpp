#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
    	Bureaucrat();
		Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
    	virtual ~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &copy);
        std::string	getName(void) const;
		int					getGrade(void) const;
		void				gradeOneUp(void);
		void				gradeOneDown(void);
        void                signForm(Form &form);

		class GradeTooHighException : public std::exception
        {
            public: 
                    virtual const char *what() const throw()
                    {
                        return ("Bureaucrat::exception : Grade is too high");
                    }
        };

        class GradeTooLowException : public std::exception
        {
            public: 
                    virtual const char *what() const throw()
                    {
                        return ("Bureaucrat::exception : Grade is too Low");
                    }
        };
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif