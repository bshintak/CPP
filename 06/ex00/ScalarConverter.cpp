#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	(void)src;
	std::cout << "Copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "Destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &op) {
	(void)op;
	return (*this);
}

template <typename T>
static bool in_limits(double c)
{
	if (c < std::numeric_limits<T>::min() || c > std::numeric_limits<T>::max())
		return false;
	return true;
}

enum e_type
{
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
	INVALID
};

e_type identifyType(std::string literal) {
    if (literal.size() == 1 && !std::isdigit(literal[0]))
        return CHAR;
    if (std::count(literal.begin(), literal.end(), '-') + std::count(literal.begin(), literal.end(), '+') > 1)
        return INVALID;
    if (std::count(literal.begin(), literal.end(), '.') > 1 || literal.at(0) == '.' || literal.at(literal.size() - 1) == '.')
        return INVALID;

    if (!literal.compare("-inf") || !literal.compare("+inf") || !literal.compare("nan") || !literal.compare("inf"))
        return DOUBLE;
    if (!literal.compare("-inff") || !literal.compare("+inff") || !literal.compare("inff") || !literal.compare("nanf"))
        return FLOAT;
    if (std::count(literal.begin(), literal.end(), 'f') > 1 || std::count(literal.begin(), literal.end(), '.') > 1)
        return INVALID;

    for (size_t i = 0; i < literal.size(); i++) {
        char c = literal[i];
        if (c == '-' || c == '+' || c == '.' || c == 'f')
            continue;
        if (std::isalpha(c))
            return INVALID;
    }
    
    size_t numDots = std::count(literal.begin(), literal.end(), '.');
    if (numDots == 1 && literal.at(0) != '.' && literal.at(literal.size() - 1) != '.') {
        if (std::count(literal.begin(), literal.end(), 'f') == 1) {
            return (*literal.rbegin() == 'f') ? FLOAT : INVALID;
        } else {
            return DOUBLE;
        }
    }

    int num;
    std::stringstream ss(literal);
    ss >> num;
    
    std::string numStr;
    ss.clear();
    ss << num;
    if (literal[0] == '+') ss << '+';
    ss >> numStr;

    if (literal == numStr)
        return INVALID;
    else 
        return INT;
}

void print(double num)
{
	std::cout << "char: ";
	char c = static_cast<char>(num);
	if (in_limits<char>(num) && !std::isnan(num))
		std::cout << (std::isprint(c) ? ("'" + std::string(1, c) + "'") : "Non printable") << std::endl;
	else
		std::cout << "impossible" << std::endl;

	std::cout << "int: ";
	if (in_limits<int>(num) && !std::isnan(num))
		std::cout << static_cast<int>(num) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void ScalarConverter::convert(std::string literal) {
    const char* typeStrings[] = {"INT", "CHAR", "FLOAT", "DOUBLE", "INVALID"};
    e_type type = identifyType(literal);
    std::cout << ">> Type is: " << typeStrings[type] << " <<" << std::endl;

    if (type == INVALID) {
        std::cout << "INVALID INPUT" << std::endl;
        return;
    }
    double value;
    switch (type) {
        case INT:
            value = atof(literal.c_str());
            if (!in_limits<int>(value)) std::cout << "Integer overflow" << std::endl;
            break;
        case FLOAT:
            value = atof(literal.c_str());
            break;
        case CHAR:
            value = static_cast<double>(literal[0]);
            break;
        case DOUBLE:
            value = strtod(literal.c_str(), NULL);
            break;
        default:
            break;
    }
    print(value);
}
