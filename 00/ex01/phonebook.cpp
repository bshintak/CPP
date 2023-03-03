#include "phonebook.hpp"

void    PhoneBook::welcome(void) {
    std::cout << std::endl;
    std::cout << "😜 Welcome to Your Awesome PhoneBook 😜" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------COMMANDS---------------" << std::endl;
    std::cout << "\x1b[32m[ADD]\033[0m\t: To add a contact." << std::endl;
    std::cout << "\x1b[32m[SEARCH]\033[0m: To search for a contact." << std::endl;
    std::cout << "\x1b[32m[EXIT]\033[0m\t: to quite the PhoneBook." << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << std::endl;
}

Contact	*PhoneBook::addContact(void) {
	static int	num;
	Contact		*cont;
	if (num == 8)
		num = 0;
	cont = contacts[num].new_contact();
	num++;
	std::cout << CONT_ADD << std::endl;
	return (cont);
}

void	Contact::print(int index)
{
	std::cout << "        " << index + 1 << " | ";
	std::cout << this->_firstName;
    std::cout << " | ";
	std::cout << this->_lastName;
    std::cout << " | ";
	std::cout << this->_nickname;
    std::cout << " | ";
	std::cout << this->_phoneNumber;
    std::cout << " | ";
	std::cout << this->_darkSecret << std::endl;
}

void	PhoneBook::searchContact(Contact *cont) {
	// if (cont)
		// std::cout << cont->getInfo() << std::endl;
	std::cout << INDEX_TABLE << std::endl;
	for (int i = 0; i < 8 ; i++)
		cont->print(i);
	std::cout << std::endl;
}
