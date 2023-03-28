#include "phonebook.hpp"

Contact::Contact()
{
	this->information[0] = "Please enter your First name: ";
	this->information[1] = "Please enter your Last name: ";
	this->information[2] = "Please enter your Nickname: ";
	this->information[3] = "Please enter your Phone number: ";
	this->information[4] = "Please enter your Darkest secret: ";
	this->names[0] = "First Name";
	this->names[1] = "Last Name";
	this->names[2] = "Nickname";
	this->names[3] = "Phone Number";
	this->names[4] = "Darkest Secret";
}

void	Contact::new_contact(void) {
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->information[i];
		std::getline(std::cin, this->info_saved[i]);
		while (this->info_saved[i] == "")
		{
			std::cout << EMPTY_FIELD;
			std::cout << "PLEASE ENTER YOUR: " << names[i] << std::endl;
			std::getline(std::cin, this->info_saved[i]);
		}
	}
}

std::string	Contact::getFieldInput(int i)
{
	return this->info_saved[i];
}

void	Contact::showContact(int i) const
{
	std::cout << std::endl;
	std::cout << "Index Contact : " << i << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << names[i] << " : " << info_saved[i] << std::endl;
}
