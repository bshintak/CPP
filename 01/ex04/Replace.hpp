# ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define ERROR_MSG "\x1b[31mERROR\033[0m\nYou need to use: ./SedIsForLosers <filename> <string1> <string2>"

class Replace {
	public:
		Replace();
		~Replace();
  	private:
		std::string	_type;
};

#endif