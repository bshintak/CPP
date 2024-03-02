#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Bureaucrat;

class AForm
{
    private:
        const std::string	    _name;
        bool					_signed;
        const int               _gradeSign;
        const int               _gradeExecute;
        std::string             _target;

    public: 
        AForm();
        AForm(const std::string name, int gradeSign, int gradeExecute);
        AForm(const AForm &copy);
        virtual ~AForm();

        AForm	&operator=(const AForm &copy);

        virtual const std::string	getName(void) const;
		virtual int					getGradeSign(void) const;
        virtual int                 getGradeExecute(void) const;
        virtual bool                getSigned() const;
        virtual void                setSigned(bool num);

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
                        return ("AForm::exception : Grade is too high");
                    }
        };

         class GradeTooLowException : public std::exception
        {
            public: 
                    virtual const char *what() const throw()
                    {
                        return ("AForm::exception : Grade is too Low");
                    }
        };

};

std::ostream	&operator<<(std::ostream &o, const AForm &copy);
