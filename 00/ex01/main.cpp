#include "phonebook.hpp"

int main()
{
	PhoneBook	list;
	Contact		*cont;
	std::string	command;

	list.welcome();
	while (1)
	{
		std::cout << PROMPT;
		std::cout << ">> ";
		std::getline (std::cin, command);
		if (command == "EXIT" || command[0] == '\0')
		{
			std::cout << EXIT;
			break;
		}
		else if (command == "ADD")
			cont = list.addContact();
		else if (command == "SEARCH")
			list.searchContact(cont);
		else
			std::cout << ERROR;
	}
	return 0;
}