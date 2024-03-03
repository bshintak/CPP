#include <iostream>
#include <iomanip>
#include <cmath>
#include "iter.hpp"

// Exemplo de função que será passada como terceiro parâmetro para iter
template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

// Exemplo de função que eleva ao quadrado e imprime um número
template <typename T>
void squareAndPrint(const T& element) {
    std::cout << "Square of " << element << " is: " << element * element << std::endl;
}

// Exemplo de função que incrementa um número inteiro
void incrementerInt(const int& nbr) {
    int nbrPlus = nbr + 1;
    std::cout << "[" << nbrPlus << "] ";
}

// Exemplo de função que incrementa um caractere
void incrementerChar(const char& c) {
    char charPlus = c + 1;
    std::cout << "[" << charPlus << "] ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Testando iter com diferentes tipos de arrays e funções
    std::cout << "Int Array: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "Double Array: ";
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;

    std::cout << "Char Array: ";
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;

    // Testando com funções adicionais
    std::cout << "Squared Int Array: ";
    iter(intArray, 5, squareAndPrint<int>);
    std::cout << std::endl;

    std::cout << "Squared Double Array: ";
    iter(doubleArray, 5, squareAndPrint<double>);
    std::cout << std::endl;

    // Testando as novas funções
    std::cout << "Incremented Int Array: ";
    iter(intArray, 5, incrementerInt);
    std::cout << std::endl;

    std::cout << "Incremented Char Array: ";
    iter(charArray, 5, incrementerChar);
    std::cout << std::endl;

    return 0;
}
