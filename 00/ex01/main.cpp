#include "phonebook.hpp"

int main()
{
	PhoneBook	list;
	std::string	command;

	list.welcome();
	while (1)
	{
		std::cout << PROMPT;
		std::cout << ">> ";
		std::getline (std::cin,command);
		if (command == "EXIT" || command[0] == '\0')
		{
			std::cout << EXIT;
			break;
		}
		else if (command == "ADD")
			list.addContact();
		// else if (command == "SEARCH")
		// 	list.searchContact();
		else
			std::cout << ERROR;
	}
	return 0;
}