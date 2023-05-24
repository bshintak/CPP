#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	list;
	std::string	command;

	list.Welcome();
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
			list.AddContact();
		else if (command == "SEARCH")
			list.SearchContact();
		else
			std::cout << ERROR;
	}
	return 0;
}
