#include "ScalarConverter.hpp"

int main(int ac, char** av) {

    ScalarConverter *conv = NULL;

    if (ac != 2)
	{
		std::cout << "INVALID" << std::endl;
		std::cout << "TRY: ./converter [arg]" << std::endl;
		return (-1);
    }
	conv->convert(av[1]);

    return 0;
}
