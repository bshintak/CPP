#include "RPN.hpp"

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int	checkLine(std::string line) {
    int signal = 1, num = 0;
	for (size_t i = 0; i < line.length(); i++)
	{
		if (i % 2 == 0 && (line.find_first_not_of(" 1234567890+-*/") != std::string::npos))
			return 1;
		if (i % 2 != 0 && line[i] != ' ')
			return 1;
        if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/')
            signal++;
        if (isdigit(line[i]))
            num++;
    }
    if (num != signal)
        return 1;
	return 0;
}

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
                std::cerr << "Error: signal" << std::endl;
                return ;
            }
            int nbr2 = nbrStack.top();
            nbrStack.pop();
            int nbr1 = nbrStack.top();
            nbrStack.pop();
            int result;
            switch (expression[i]) {
                case '+':
                    result = nbr1 + nbr2;
                    break ;
                case '-':
                    result = nbr1 - nbr2;
                    break ;
                case '*':
                    result = nbr1 * nbr2;
                    break ;
                case '/':
                    if (nbr2 != 0) {
                        result =  nbr1 / nbr2;
                        break ;
                    }
                    else {
                        std::cout << "Error" << std::endl;
                        return ;
                    }
                    break ;
                default:
                    return ;
            }
            nbrStack.push(result);
        }
        i++;
    }
    std::cout << nbrStack.top() << std::endl;
}
