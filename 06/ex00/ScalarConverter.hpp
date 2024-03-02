#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits> //max and min
#include <cctype> //isdigit()
#include <iomanip> //setprecision()
// #include <algorithm>
// #include <iomanip>
// #include <cmath>
// #include <string>
#include <typeinfo>

#define INT_TYPE 0
#define CHAR_TYPE 1
#define FLOAT_TYPE 2
#define DOUBLE_TYPE 3
#define INVALID_TYPE 4

class ScalarConverter {
  private:
		ScalarConverter & operator=(const ScalarConverter &op);
		ScalarConverter(const ScalarConverter &src);

		void	charConvertion(std::string value);
		void	intConvertion(std::string value);
		void	floatConvertion(std::string value);
		void	doubleConvertion(std::string value);
		void	pseudoLiteralsConvertion(std::string value);
		void	exceptionConvertion(std::string value);

		int		check_literal(std::string literal);

	public:
		ScalarConverter();
		~ScalarConverter();

		void	convert(std::string literal);
};

#endif