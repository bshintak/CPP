#pragma once

#include <iostream>

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

		Bureaucrat	        &operator=(const Bureaucrat &copy);
        std::string	        getName(void) const;
		int					getGrade(void) const;
        void                setGrade(int grade);
		void				gradeOneUp(void);
		void				gradeOneDown(void);

		class GradeTooHighException : public std::exception
        {
            public: 
                    const char *what() const throw()
                    {
                        return ("Bureaucrat::exception : Grade is too high");
                    }
        };

        class GradeTooLowException : public std::exception
        {
            public: 
                    const char *what() const throw() //what() é usada para obter uma descrição da exceção e throw garante que a função what() não vai lançar (throw) exceções adicionais
                    {
                        return ("Bureaucrat::exception : Grade is too Low");
                    }
        };
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);
