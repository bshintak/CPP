#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {
	// std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

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
	this->contacts[_num % MAX_CONTACTS].new_contact();
	this->_num += 1;
}

std::string	PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

int	PhoneBook::strIsDigit(std::string str) const
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

void    PhoneBook::printTable(std::string str) {

    std::cout << std::endl;
    for (int k = 0; k < 5; k++)
    {
        std::cout << GREEN << PIPE;
        str = table(k);
        std::cout << BOLDWHITE << std::setw(10) << str << NONE;

    }
	std::cout << std::endl;
}

void    PhoneBook::printTruncate(int i) {

    while (i < MAX_CONTACTS)
    {
        std::cout << GREEN << PIPE;
		std::cout << std::setw(10) << i;
		std::cout << GREEN << PIPE;
        for (int j = 0; j < 3; j++)
		{
			std::cout << std::setw(10) << truncate(this->contacts[i].getFieldInput(j));
            std::cout << GREEN << PIPE;
        }
	    std::cout << std::endl;
        ++i;
    }
}

int PhoneBook::ft_fake_atoi(std::string str) {
    int result = 0;
    bool neg = false;
    int i = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
        neg = str[i++] == '-';
    if (str[i] < '0' || str[i] > '9')
        return -1;
    while (str[i] >= '0' && str[i] <= '9') 
        result = result * 10 + (str[i++] - '0');
    return neg ? -result : result;
}

void	PhoneBook::searchContact(void) {
    int i = 0;
    std::string str = "";

	printTable(str);
    printTruncate(i);
    std::cout << "\nWhich contact would you like to display ? [0 - 7]" << std::endl;
	std::getline(std::cin, str);
    if (str == "")
        std::cout << "\nPlease, "<< RED << "SEARCH" << NONE << " again" << std::endl;
    else
	{
		i = ft_fake_atoi(str);
        std::cout << "i = " << i << std::endl;
		while (i < 0 || i >= this->_num || i >= MAX_CONTACTS)
		{
			std::cout << RED << "Invalid contact index : [0 - 7], pick an other one :" << NONE << std::endl;
			std::getline(std::cin, str);
			if (str.length() == 1 && strIsDigit(str) == 0)
				i = ft_fake_atoi(str);
		}
		if (this->contacts[i].getFieldInput(0) != "")
			this->contacts[i].showContact(i);
	}
}
