#include "Replace.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
		return (std::cerr << ERROR_MSG << std::endl, 1);
	return (replaceLine(argv[1], argv[2], argv[3]));
	return 0;
}