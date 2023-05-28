#include "Replace.hpp"

void replaceLine2(std::ifstream& file, std::ofstream& newFile, std::string& s1, std::string& s2)
{
	std::string	line;
	// getline vai ler linha por linha do "file" e salvar o que ja foi lido no "line"
	while (std::getline(file, line))
	{
		// size_t porque o find() retorna um size_t
		size_t pos = 0;
		std::string newLine;
		// std::string::npos é definido como o valor máximo de size_t, ele é definido na 
		// biblioteca padrão do C++ para esse propósito específico, indicando que uma substring não foi encontrada
		// e porque nao usar um nulo? o nulo é usado para representar ponteiros nulos, não para indicar a falta de uma 
		// substring em uma busca, entao usar esse valor é mais claro, compatível e evita confusões com nulos de ponteiros.
		while (pos < line.length()) {
            size_t foundPos = line.find(s1, pos);
            if (foundPos != std::string::npos) {
                // Copia a parte não afetada da linha para a nova linha
                newLine += line.substr(pos, foundPos - pos);
                // Adiciona a substituição (s2) à nova linha
                newLine += s2;
                // Atualiza a posição para continuar a busca após a substituição
                pos = foundPos + s1.length();
            } else {
                // Nenhuma ocorrência de s1 restante na linha, copia o restante da linha para a nova linha
                newLine += line.substr(pos);
                break;
            }
        }
        // Escreve a nova linha no arquivo de destino
        newFile << newLine << std::endl;
	}
	file.close();
	newFile.close();
}

int	replaceLine(std::string filename, std::string s1, std::string s2) {
		// representa o fluxo de entrada. É usada para ler dados de um arquivo existente
		std::ifstream	file;

		// A função open recebe o nome do arquivo convertido para um ponteiro de caractere
		// (c_str() é usado para converter a string filename para um const char*).
		file.open(filename.c_str());
		// A função verifica se o arquivo foi aberto com sucesso usando o método is_open()
		if (file.is_open())
		{
			// representa o fluxo de saida. É usada para gravar dados em um arquivo
			// vai criar um novo arquivo com o mesmo nome mas concatenado com ".replace"
			std::ofstream newFile(filename.append(".replace").c_str());
			if (newFile)
				replaceLine2(file, newFile, s1, s2);
			else
				std::cout << "\033[31mError: File creation failed." << std::endl;
			return 0;
		}
		else
			std::cout << "\033[31mError: File not found." << std::endl;
		return 1;
}

