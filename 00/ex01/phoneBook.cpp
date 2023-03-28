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
    this->_num = num;
}

std::string	PhoneBook::truncate(std::string string)
{
	if (string.length() > 10)
		return (string.substr(0, 9) + ".");
	else
		return (string);
}

int	PhoneBook::strIsDigit(std::string string) const
{
	for (unsigned long i = 0; i < string.length(); i++)
	{
		if (!isdigit(string[i]))
			return (-1);
	}
	return (0);
}

std::string PhoneBook::table(int k) {

    std::string str = "";
    if (k == 0)
        str = "Index";
    else if (k == 1)
        str = "First Name";
    else if (k == 2)
        str = "Last Name";
    else if (k == 3)
        str = "Nickname";
    return (str);
}

void	PhoneBook::searchContact(void) {
    int i = 0;
    std::string str = "";

	std::cout << std::endl;
    for (int k = 0; k < 5; k++)
    {
        std::cout << VIOLET << PIPE;
        str = table(k);
        std::cout << BOLDWHITE << std::setw(10) << str << NONE;

    }
	std::cout << std::endl;
    while (i < MAX_CONTACTS)
    {
        std::cout << VIOLET << PIPE;
		std::cout << std::setw(10) << i;
		std::cout << VIOLET << PIPE;
        for (int j = 0; j < 3; j++)
		{
			std::cout << std::setw(10) << this->contacts[i].getFieldInput(j);
            std::cout << VIOLET << PIPE;
        }
	    std::cout << std::endl;
        ++i;
    }
    std::cout << "\nWhich contact would you like to display ? [0 - 7]" << std::endl;
	std::getline(std::cin, str);
    if (str == "")
        std::cout << "\nPlease, "<< RED << "SEARCH" << NONE << " again" << std::endl;
    else
	{
		i = std::atoi(str.c_str()); // c_str() returns a pointer to the c-string representation of the string object's value.
		while (i < 0 || i >= this->_num || i >= MAX_CONTACTS)
		{
			std::cout << RED << "Invalid contact index : [0 - 7], pick an other one :" << NONE << std::endl;
			std::getline(std::cin, str);
			// if (str.length() == 1 && strIsDigit(str) == 0)
			// 	i = std::atoi(str.c_str());
		}
		if (this->contacts[i].getFieldInput(0) != "")
			this->contacts[i].showContact(i);
	}
}
