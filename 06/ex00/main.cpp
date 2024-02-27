#include "ScalarConverter.hpp"

int main() {
    std::cout << "Exemplos de conversões" << std::endl;
    ScalarConverter::convert("42"); //certo
    ScalarConverter::convert("-123.45"); //certo
    ScalarConverter::convert("a"); //certo
    ScalarConverter::convert("3.14f"); //certo
    ScalarConverter::convert("nan"); //certo
    ScalarConverter::convert("123.456789"); //char errado

    std::cout << "Testes adicionais" << std::endl;
    ScalarConverter::convert("2147483647"); // INT_MAX
    ScalarConverter::convert("-2147483648"); // INT_MIN
    ScalarConverter::convert("3.402823e+38f"); // FLT_MAX
    ScalarConverter::convert("-3.402823e+38f"); // -FLT_MAX
    ScalarConverter::convert("1.797693e+308"); // DBL_MAX
    ScalarConverter::convert("-1.797693e+308"); // -DBL_MAX

    std::cout << "Teste de overflow de int" << std::endl;
    ScalarConverter::convert("2147483648"); // Overflow de int

    std::cout << "Testes de caracteres" << std::endl;
    ScalarConverter::convert("c");
    ScalarConverter::convert("a");

    std::cout << "Testes de números não existentes (pseudo-literals)" << std::endl;
    ScalarConverter::convert("-inff"); // -inf para float
    ScalarConverter::convert("+inff"); // +inf para float
    ScalarConverter::convert("nanf"); // nan para float
    ScalarConverter::convert("-inf"); // -inf para double
    ScalarConverter::convert("+inf"); // +inf para double
    ScalarConverter::convert("nan"); // nan para double

    return 0;
}
