#include "phonebook.hpp"

Contact::Contact()
{
	this->information[0] = "Please enter your First name: ";
	this->information[1] = "Please enter your Last name: ";
	this->information[2] = "Please enter your Nickname: ";
	this->information[3] = "Please enter your Phone number: ";
	this->information[4] = "Please enter your Darkest secret: ";
}

Contact	*Contact::new_contact(void) {
	for (int i = 0; i < 5; i++)
	{
		while (1)
		{
			std::cout << this->information[i];
			if (i == 0)
				std::getline(std::cin, this->_firstName);
			else if (i == 1)
				std::getline(std::cin, this->_lastName);
			else if (i == 2)
				std::getline(std::cin, this->_nickname);
			else if (i == 3)
				std::getline(std::cin, this->_phoneNumber);
			else if (i == 4)
				std::getline(std::cin, this->_darkSecret);
			break ;
		}
	}
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_darkSecret << std::endl;
	return(this);
}