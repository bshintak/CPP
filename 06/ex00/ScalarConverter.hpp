#pragma once

#include <iostream>
#include <sstream>
#include <limits> //max and min
#include <cctype> //isdigit()
#include <iomanip> //setprecision()
#include <typeinfo>

#define INT_TYPE 0
#define CHAR_TYPE 1
#define FLOAT_TYPE 2
#define DOUBLE_TYPE 3
#define INVALID_TYPE 4

class ScalarConverter {
  private:
		ScalarConverter();
		ScalarConverter & operator=(const ScalarConverter &op);
		ScalarConverter(const ScalarConverter &src);


	public:
		~ScalarConverter();
		static void	convert(std::string literal);
};

void	charConvertion(std::string value);
void	intConvertion(std::string value);
void	floatConvertion(std::string value);
void	doubleConvertion(std::string value);
void	pseudoLiteralsConvertion(std::string value);
void	exceptionConvertion(std::string value);
