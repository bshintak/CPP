#include "PhoneBook.hpp"

Contact::Contact()
{
	// std::cout << "Constructor called" << std::endl;
	this->Information[0] = "Please enter your First name: ";
	this->Information[1] = "Please enter your Last name: ";
	this->Information[2] = "Please enter your Nickname: ";
	this->Information[3] = "Please enter your Phone number: ";
	this->Information[4] = "Please enter your Darkest secret: ";
	this->Names[0] = "First Name";
	this->Names[1] = "Last Name";
	this->Names[2] = "Nickname";
	this->Names[3] = "Phone Number";
	this->Names[4] = "Darkest Secret";
}

Contact::~Contact(void) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contact::NewContact(void) {
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->Information[i];
		std::getline(std::cin, this->InfoSaved[i]);
		while (this->InfoSaved[i] == "")
		{
			std::cout << EMPTY_FIELD;
			std::cout << "PLEASE ENTER YOUR: " << Names[i] << std::endl;
			std::getline(std::cin, this->InfoSaved[i]);
		}
	}
}

std::string	Contact::GetFieldInput(int i)
{
	return this->InfoSaved[i];
}

void	Contact::ShowContact(int i) const
{
	std::cout << std::endl;
	std::cout << "Index Contact : " << i << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << Names[i] << " : " << InfoSaved[i] << std::endl;
}
