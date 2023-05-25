#include "Replace.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 4)
	{
		Replace rep(argv[1]);
		rep.replace(argv[2], argv[3]);
	}
	else
	{
		std::cerr << ERROR_MSG << std::endl;
		return 1;
	}
}