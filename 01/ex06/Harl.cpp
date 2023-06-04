#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) { 
	std::cout << "Debug: " << DEBUG << std::endl; 
}
void Harl::info(void) {
	std::cout << "Info: " << INFO << std::endl; 
}
void Harl::warning(void) { 
	std::cout << "Warning: " << WARNING << std::endl;
}
void Harl::error(void) {
	std::cout << "Error: " << ERROR << std::endl;
}

void Harl::complain(std::string level) {
	// array de tamanho 4, onde cada elemento é um ponteiro para uma função membro da classe Harl
    void (Harl::*options[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string option_type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int num = -1;
    for (int i = 0; i < 4; i++) {
        if (level == option_type[i])
			num = i;
    }
		return (this->*options[num])();
}