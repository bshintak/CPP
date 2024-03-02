#pragma once

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

    public: 
        Form();
        Form(const std::string name, int gradeSign, int gradeExecute);
        Form(const Form &copy);
        virtual ~Form();

        Form	&operator=(const Form &copy);

        const std::string	getName(void) const;
		int					getGradeSign(void) const;
        int                 getGradeExecute(void) const;
        bool                getSigned(void) const;
        void                setSigned(bool num);

		void                beSigned(const Bureaucrat &bureaucrat);

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

std::ostream	&operator<<(std::ostream &os, const Form &copy);
