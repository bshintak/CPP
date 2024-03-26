#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	(void)src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &op) {
	(void)op;
	return (*this);
}

void	charConvertion(std::string literal) {
	std::stringstream s(literal);
	int literal_char;

	if (literal.length() != 1 || isdigit(literal[0]))
		s >> literal_char;
	else
		literal_char = static_cast<int>(literal[0]);
	if (literal_char < 0 || literal_char > std::numeric_limits<char>::max()) {
		std::cout << "CHAR: impossible" << std::endl;
		return ;
	}
	if ((literal_char >= 0 && literal_char < 32) || literal_char == 127) {
		std::cout << "CHAR: Non displayable"<< std::endl;
		return ;
	}
	std::cout << "CHAR: \'" << static_cast<char>(literal_char) << "\'" << std::endl;
}

void	intConvertion(std::string literal) {
	std::stringstream s(literal);
	double literal_int;

	if (literal.length() != 1)
		s >> literal_int;
	else
		literal_int = static_cast<double>(literal[0]);
	if (literal_int > std::numeric_limits<int>::max() || literal_int < std::numeric_limits<int>::min()){
		std::cout << "INT: impossible" << std::endl;
		return ;
	}
	std::cout << "INT : \'" << static_cast<int>(literal_int) << "\'" << std::endl;

}

void	floatConvertion(std::string literal) {
	std::stringstream s(literal);
	float literal_float;

	if (literal.length() != 1)
		s >> literal_float;
	else
		literal_float = static_cast<float>(literal[0]);
	if (literal.find('.') == std::string::npos || literal[literal.find('.') + 1] == '0')
		std::cout << std::fixed << std::setprecision(1) << "FLOAT: \'" << literal_float << "f\'" << std::endl;
	else
		std::cout << "FLOAT: " << literal_float << "f" << std::endl;
}

void	doubleConvertion(std::string literal) {
	std::stringstream s(literal);
	double literal_double;

	if (literal.length() != 1)
		s >> literal_double;
	else
		literal_double = static_cast<double>(literal[0]);
	std::cout << "DOUBLE: \'" << static_cast<double>(literal_double) << "\'" << std::endl;
}

void	pseudoLiteralsConvertion(std::string literal) {
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
	{
		std::cout << "CHAR: impossible" << std::endl;
		std::cout << "INT: impossible" << std::endl;
		std::cout << "FLOAT: " << literal << "f" << std::endl;
		std::cout << "DOUBLE: " << literal << std::endl;
	}
	else if (literal == "-inff" || literal == "+inff" || literal == "nanf")
	{
		std::cout << "CHAR: impossible" << std::endl;
		std::cout << "INT: impossible" << std::endl;
		std::cout << "FLOAT: " << literal << std::endl;
		std::cout << "DOUBLE: " << literal << std::endl;
	}
	return ;
}

void	exceptionConvertion(std::string literal) {
	std::cout << "CHAR: Non displayable"<< std::endl;
	std::cout << "INT : \'" << literal << "\'" << std::endl;
	std::cout << "FLOAT: " << literal << ".0f" << std::endl;
	std::cout << "DOUBLE: \'" << literal << ".0\'" << std::endl;
}

void ScalarConverter::convert(std::string literal)
{
	if (literal != "\0") {
		if (literal == "-inf" || literal == "+inf" || literal == "-inff" || literal == "+inff" || literal == "nan" || literal == "nanf")
			pseudoLiteralsConvertion(literal);
		else if (literal.find('f') != std::string::npos && literal.find_first_of('f') != literal.length() - 1) {
			std::cout << "INVALID ARGUMENT" << std::endl;
			return ;
		}
		else if (literal.compare("0") >= 0 && literal.compare("9") <= 0 && literal.length() == 1) {
			exceptionConvertion(literal);
		}
		else {
			charConvertion(literal);
			intConvertion(literal);
			floatConvertion(literal);
			doubleConvertion(literal);
		}
	}
}