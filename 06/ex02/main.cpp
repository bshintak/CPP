#include "GenerateAndIdentyfy.hpp"

int	main(void)
{
	Base *random;

	std::cout << "\033[1;31mGenerating... Can be A, B or C\033[0m" << std::endl;
	random = generate();
	identify(random);
	identify(*random);

	std::cout << "\033[1;31mTesting an Invalid Type\033[0m" << std::endl;
	random = NULL;
	identify(random);
	identify(*random);
}