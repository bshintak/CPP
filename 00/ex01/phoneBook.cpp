#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->_num = 0;
	// std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void    PhoneBook::Welcome(void) {
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

void	PhoneBook::AddContact(void) {
	this->contacts[_num % MAX_CONTACTS].NewContact();
	this->_num += 1;
}

std::string	PhoneBook::Truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

int	PhoneBook::StrIsDigit(std::string str) const
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return -1;
	}
	return 0;
}

std::string PhoneBook::Table(int k) {

    std::string str = "";
    if (k == 0)
        str = "Index";
    else if (k == 1)
        str = "First Name";
    else if (k == 2)
        str = "Last Name";
    else if (k == 3)
        str = "Nickname";
    return str;
}

void    PhoneBook::PrintTable(std::string str) {

    std::cout << std::endl;
    for (int k = 0; k < 5; k++)
    {
        std::cout << GREEN << PIPE;
        str = Table(k);
        std::cout << BOLDWHITE << std::setw(10) << str << NONE;

    }
	std::cout << std::endl;
}

void    PhoneBook::PrintTruncate(int i) {

    while (i < MAX_CONTACTS)
    {
        std::cout << GREEN << PIPE;
		std::cout << std::setw(10) << i;
		std::cout << GREEN << PIPE;
        for (int j = 0; j < 3; j++)
		{
			std::cout << std::setw(10) << Truncate(this->contacts[i].GetFieldInput(j));
            std::cout << GREEN << PIPE;
        }
	    std::cout << std::endl;
        ++i;
    }
}

int PhoneBook::FakeAtoi(std::string str) {
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

void	PhoneBook::SearchContact(void) {
    int i = 0;
    std::string str = "";

    if (!this->contacts[0].GetFieldInput(0).empty())
	{
        PrintTable(str);
        PrintTruncate(i);
        std::cout << INDEX_TO_DISPLAY << std::endl;
	    std::getline(std::cin, str);
    }
    if (str == "")
        std::cout << PHONEBOOK_EMPTY;
    else
	{
		i = FakeAtoi(str);
        if (!this->contacts[0].GetFieldInput(0).empty())
        {
		    while ((i < 0 || i >= this->_num || i >= MAX_CONTACTS))
		    {
		    	std::cout << RED << NO_INDEX << NONE << std::endl;
		    	std::getline(std::cin, str);
		    	if (str.length() == 1 && StrIsDigit(str) == 0)
		    		i = FakeAtoi(str);
		    }
        }
		if (this->contacts[i].GetFieldInput(0) != "")
			this->contacts[i].ShowContact(i);
	}
}
