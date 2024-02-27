#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <cmath>
#include <string>

#define INT_TYPE 0
#define CHAR_TYPE 1
#define FLOAT_TYPE 2
#define DOUBLE_TYPE 3
#define INVALID_TYPE 4

class ScalarConverter {
  private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter & operator=(const ScalarConverter &op);

	public:
		~ScalarConverter();
		static void convert(std::string literal);
};

#endif