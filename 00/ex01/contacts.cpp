#include "phonebook.hpp"

Contact::Contact()
{
	this->information[0] = "Please enter your First name: ";
	this->information[1] = "Please enter your Last name: ";
	this->information[2] = "Please enter your Nickname: ";
	this->information[3] = "Please enter your Phone number: ";
	this->information[4] = "Please enter your Darkest secret: ";
}

void	Contact::new_contact(void) {
	for (int i = 0; i < 5; i++)
	{
		while (1)
		{
			std::cout << this->information[i];
			std::getline(std::cin, this->info_saved[i]);
			// std::cout << info_saved[i] << std::endl;
			if (this->info_saved[i] == "")
				std::cout << EMPTY_FIELD;
			else
				break ;
		}
	}
}