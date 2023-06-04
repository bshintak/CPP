#include "Harl.hpp"

int check_args(char *str1, const char *str2) {
	int	i = 0;
	while (str1[i++]) {
		if (str1[i] != str2[i])
			return 0;
	}
	return 1;
}

int main(int argc, char **argv) {
	Harl harl;

	if (argc == 2) {
		if (check_args(argv[1], "DEBUG")) {
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
		}
		else if (check_args(argv[1], "INFO")) {
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
		}
		else if (check_args(argv[1], "WARNING")) {
			harl.complain("WARNING");
			harl.complain("ERROR");
		}
		else if (check_args(argv[1], "ERROR")) {
			harl.complain("ERROR");
		}
		else
			std::cerr << INVALID << std::endl;
	}
	else
		std::cout << "Wrong arguments!" << std::endl;
	return 0;
}