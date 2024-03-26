#include "Data.hpp"

Data::Data(): value(100), str("Undefined") {}
Data::~Data() {}

Data::Data(Data const& src) {
	*this = src;
}

void	Data::setValue(const int nbr) {
	this->value = nbr;
}

int	Data::getValue(void) const {
	return (this->value);
}

void	Data::setString(const std::string string) {
	this->str = string;
}

std::string	Data::getString(void) const {
	return (this->str);
}
