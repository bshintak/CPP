#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137){
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		AForm("shrubbery creation", 145, 137)
{
	this->setFormTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExecute()){
	std::cout << "<ShrubberyCreationForm> copy constructor is called." << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	if (this != &rhs)
	{
		this->setSigned(rhs.getSigned());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void ShrubberyCreationForm::executeForm() const {
	std::string fileName = this->getFormTarget() + "_shrubbery";
	std::ofstream outFile(fileName.c_str());
	if (!outFile) {
	  std::cout << "Create file error." << std::endl;
	  return;
	}

	outFile << "            .        +          .      .          ." << std::endl;
	outFile << "     .            _        .                    ." << std::endl;
	outFile << "  ,              /;-._,-.____        ,-----.__" << std::endl;
	outFile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
	outFile << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
	outFile << "                      ,    `./  \\:. `.   )==-\'  ." << std::endl;
	outFile << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
	outFile << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
	outFile << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
	outFile << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7" << std::endl;
	outFile << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
	outFile << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
	outFile << ".               \":._:`\\____  /:'  /      .           ." << std::endl;
	outFile << "                    \\::.  :\\/:'  /              +" << std::endl;
	outFile << "   .                 `.:.  /:'  }      ." << std::endl;
	outFile << "           .           ):_(:;   \\           ." << std::endl;
	outFile << "                      /:. _/ ,  |" << std::endl;
	outFile << "                   . (|::.     ,`                  ." << std::endl;
	outFile << "     .                |::.    {\\                  " << std::endl;
	outFile << "                      |::.\\  \\ `." << std::endl;
	outFile << "                      |:::(\\    |" << std::endl;
	outFile << "              O       |:::/{ }  |                  (o" << std::endl;
	outFile << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
	outFile << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
	outFile << "     ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~" << std::endl;
	
  outFile.close();
}
