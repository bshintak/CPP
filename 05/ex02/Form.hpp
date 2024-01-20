#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string	    _name;
        bool					_signed;
        const int               _gradeSign;
        const int               _gradeExecute;
        std::string             _target;

    public: 
        Form();
        Form(const std::string name, int gradeSign, int gradeExecute);
        Form(const Form &copy);
        virtual ~Form();

        Form	&operator=(const Form &copy);

        const std::string	getName(void) const;
		int					getGradeSign(void) const;
        int                 getGradeExecute(void) const;
        bool                getIsSigned(void);
        void                setSigned(bool num);
        bool                getSigned() const;

		void                beSigned(const Bureaucrat &bureaucrat);

        /*---------- NEW ----------*/
        void setFormTarget(std::string target);
        std::string getFormTarget() const;

        void execute(Bureaucrat const & executor) const;
	    virtual void executeForm() const = 0;
	    bool checkFormSignedStatus() const;
	    bool checkFormExecuteGrade(Bureaucrat const & executor) const;
        /*-------------------------*/

        class GradeTooHighException : public std::exception
        {
            public: 
                    virtual const char *what() const throw()
                    {
                        return ("Form::exception : Grade is too high");
                    }
        };

         class GradeTooLowException : public std::exception
        {
            public: 
                    virtual const char *what() const throw()
                    {
                        return ("Form::exception : Grade is too Low");
                    }
        };

};

std::ostream	&operator<<(std::ostream &o, const Form &copy);

#endif