#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Wrong arguments!" << std::endl;
	return 0;
}