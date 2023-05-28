# ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

# define ERROR_MSG "\x1b[31mERROR\033[0m\nYou need to use: ./SedIsForLosers <filename> <string1> <string2>"

int	replaceLine(std::string filename, std::string s1, std::string s2);
void replaceLine2(std::ifstream& file, std::ofstream& file2, std::string& s1, std::string& s2);

#endif