#include "ScalarConverter.hpp"
#include <cfloat>

int main(int ac, char** av) {

    ScalarConverter conv;

    if (ac != 2)
	{
		std::cout << "INVALID" << std::endl;
		std::cout << "TRY: ./converter [arg]" << std::endl;
		return (-1);
    }
	conv.convert(av[1]);

    return 0;
}
