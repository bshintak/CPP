#include <iostream>

int main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
  	std::string &stringREF = string;

    std::cout << "the value of the string: " << string << std::endl;
    std::cout << "the memory address of the string: " << &string << std::endl;
    std::cout << std::endl;

    std::cout << "the value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "the memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << std::endl;

    std::cout << "the value pointed to by stringREF: " << stringREF << std::endl;
    std::cout << "the memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "----------------------------------------------------" << std::endl;

    std::cout << "string: " << string << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
    std::cout << std::endl;

	stringREF = "NEW REF";
    std::cout << "new string: " << string << std::endl;
    std::cout << "new stringREF: " << stringREF << std::endl;

	std::cout << "----------------------------------------------------" << std::endl;

	std::cout << "string: " << string << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << std::endl;

	*stringPTR = "NEW PTR";
    std::cout << "new string: " << string << std::endl;
    std::cout << "new stringPTR: " << *stringPTR << std::endl;
}