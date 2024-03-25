#include "RPN.hpp"

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int operate(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                std::cout << "Error" << std::endl;
                return -1;
            }
        default:
            return -1;
    }
    return 0;
}

// Função que exibe o resultado da expressão em notação polonesa reversa
void displayResult(const std::string expression) {
    std::stack<int> nbrStack;

    std::string::size_type i = 0; // Uso de std::string::size_type para iterar sobre a string
    while (i < expression.length()) { // Iteração enquanto houver caracteres na string
        if (isdigit(expression[i])) {
            int iNbr = expression[i] - '0'; // Converte o caractere numérico para inteiro
            nbrStack.push(iNbr);
        }
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            if (nbrStack.size() < 2) {
                std::cout << "Error" << std::endl;
                exit(1);
            }
            int nbr2 = nbrStack.top();
            nbrStack.pop();
            int nbr1 = nbrStack.top();
            nbrStack.pop();
            int result = operate(nbr1, nbr2, expression[i]);
            if (result == -1) {
              std::cerr << "Error" << std::endl;
              return;
            }
            nbrStack.push(result);
        }
        i++; // Incrementa o índice manualmente
    }
    std::cout << nbrStack.top() << std::endl;
}
