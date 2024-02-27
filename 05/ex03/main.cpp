#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    // Criação de um estagiário
    Intern someRandomIntern;

    AForm* shrubberyForm = someRandomIntern.makeForm("shrubbery creation", "Garden");
		std::cout << "Formulário criado com sucesso: " << shrubberyForm->getName() << std::endl;
    AForm* robotomyForm = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "Formulário criado com sucesso: " << robotomyForm->getName() << std::endl;
    AForm* presidentialForm = someRandomIntern.makeForm("presidential pardon", "Someone");
		std::cout << "Formulário criado com sucesso: " << presidentialForm->getName() << std::endl;
		
		// Tentativa de criar um formulário inválido
    // AForm* invalidForm;
		// invalidForm = someRandomIntern.makeForm("invalid form", "Target");
    // if (invalidForm == NULL) {
        // std::cerr << "Erro: Tipo de formulário inválido!" << std::endl;
    // }

    // // Liberação de memória
    // delete invalidForm;
    // delete shrubberyForm;
    // delete robotomyForm;
    // delete presidentialForm;

    return 0;
}
