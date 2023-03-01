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

void	PhoneBook::addContact(void) {
	static int	num;
	if (num == 8)
		num = 0;
	contacts[num].new_contact();
	num++;
	std::cout << CONT_ADD << std::endl;
}

// void	print(int index)
// {
// 	std::cout << "         " << index << " | ";
// 	std::cout << this->info_saved[index] << std::endl;
// }

// void	PhoneBook::searchContact(void) {
// 	std::cout << INDEX_TABLE << std::endl;
// 	for (int i = 0; i < 5 ; i++)
// 		print(i + 1);
// 	std::cout << std::endl;
// }
