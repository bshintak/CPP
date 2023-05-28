Alocação na pilha (stack):
A alocação na pilha é gerenciada automaticamente pelo compilador. As variáveis ​​são alocadas em ordem de execução e
desalocadas automaticamente quando saem do escopo. A alocação na pilha é geralmente mais rápida, pois envolve apenas
a modificação do ponteiro de pilha.

Características da alocação na pilha:
- Espaço alocado e liberado automaticamente pelo compilador.
- O tamanho da memória alocada é limitado e pré-determinado.
- A ordem de alocação e liberação segue a ordem de execução do programa.
- Alocação e desalocação são rápidas.

Exemplo de alocação na pilha:
int x = 5;

/----------------------------------------------------------------------------------------------------------------------------/

Alocação no heap:
A alocação no heap é feita manualmente pelo programador usando os operadores new e delete. O heap é uma área de memória
maior e mais flexível em comparação com a pilha. Os objetos alocados no heap permanecem lá até serem explicitamente
desalocados pelo programador.

Características da alocação no heap:
- O programador é responsável por alocar e liberar a memória.
- O tamanho da memória alocada pode ser determinado em tempo de execução.
- Os objetos persistem até serem explicitamente desalocados.
- Alocação e desalocação podem ser mais lentas.

Exemplo de alocação no heap:
int* ptr = new int;  // Alocação de memória para um inteiro no heap
*ptr = 10;
delete ptr;  // Liberação da memória alocada

/----------------------------------------------------------------------------------------------------------------------------/

new -> aloca dinamicamente memória para um objeto e retornar um ponteiro para essa memória alocada
nesse caso aloca um objeto do tipo Zombie

/----------------------------------------------------------------------------------------------------------------------------/

A diferença entre delete [] zombie e delete zombie:

delete [] zombie:
- Essa forma é usada quando o objeto alocado dinamicamente é um array, ou seja, quando você usa new[] para alocar a memória.
- Essa sintaxe é usada para liberar a memória alocada para um array de objetos.
- É importante usar delete [] para desalocar corretamente a memória alocada para arrays, pois o compilador precisa
saber que está lidando com um array e desalocar a memória de forma adequada.
Exemplo:
Zombie* zombies = new Zombie[10];  // Alocação de um array de 10 objetos Zombie
delete [] zombies;  // Liberação da memória alocada para o array de objetos Zombie

delete zombie:
- Essa forma é usada quando o objeto alocado dinamicamente não é um array, ou seja, quando você usa new para alocar a memória.
- Essa sintaxe é usada para liberar a memória alocada para um único objeto.
- É importante usar delete para desalocar corretamente a memória alocada para objetos individuais.
Exemplo:
Zombie* zombie = new Zombie;  // Alocação de um objeto Zombie
delete zombie;  // Liberação da memória alocada para o objeto Zombie

/----------------------------------------------------------------------------------------------------------------------------/

1. string:
string é uma variável que representa um objeto do tipo std::string, que é uma classe de string na biblioteca padrão do C++.
Quando você declara uma variável string, está criando uma instância dessa classe que pode armazenar uma sequência de caracteres.

2. *string:
*string não é uma sintaxe válida por si só. No entanto, se você estiver usando um ponteiro para std::string,
então *stringPtr seria usado para acessar o valor apontado pelo ponteiro.
Exemplo:
std::string* stringPtr = new std::string("Hello");
std::cout << *stringPtr << std::endl;  // Imprime o valor apontado por stringPtr (no caso, "Hello")

3. &string:
&string é usado para obter o endereço de memória da variável string. O operador & é conhecido como operador de endereço
e retorna o endereço de memória de uma variável.
Exemplo:
std::string str = "Hello";
std::cout << &str << std::endl;  // Imprime o endereço de memória de str

/----------------------------------------------------------------------------------------------------------------------------/

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {}
- No meu construtor do humanA eu recebo como parametro name e weapon porque eu preciso inicializar as duas variáveis

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}
- No caso do humanB eu só recebo o name porque não o humanB não precisa ser sempre inicializado com uma weapon

/----------------------------------------------------------------------------------------------------------------------------/

<iostream> é uma biblioteca padrão do C++ que fornece recursos para entrada e saída de dados. Ela contém definições
para objetos como cin, cout e cerr, que são usados para ler dados do usuário e exibir informações na tela.

Aqui estão algumas das principais classes e objetos fornecidos pela biblioteca <iostream>:
- std::cin: É um objeto que permite a entrada de dados a partir do console. Você pode usar o operador de extração (>>)
para ler diferentes tipos de dados, como inteiros, floats, strings, etc.
- std::cout: É um objeto que permite a saída de dados para o console. Você pode usar o operador de inserção (<<) para
exibir diferentes tipos de dados, como inteiros, floats, strings, etc.
- std::cerr: É um objeto semelhante a std::cout, mas é usado para exibir mensagens de erro ou informações de diagnóstico.
A saída do std::cerr é geralmente direcionada para o console de erro.


<fstream> é outra biblioteca padrão do C++ que fornece recursos para manipulação de arquivos. Ela permite a
leitura e escrita de dados em arquivos no disco. A biblioteca <fstream> contém classes que permitem a abertura, leitura,
escrita e fechamento de arquivos. Ela é especialmente útil quando você precisa ler dados de um arquivo existente ou
gravar dados em um novo arquivo.

Aqui estão algumas das classes e objetos principais fornecidos pela biblioteca <fstream>:
- std::ifstream: É uma classe que representa um fluxo de entrada de arquivo. É usada para ler dados de um arquivo existente.
Você pode usar objetos da classe std::ifstream juntamente com o operador de extração (>>) para ler dados de diferentes tipos do arquivo.
- std::ofstream: É uma classe que representa um fluxo de saída de arquivo. É usada para gravar dados em um arquivo.
Você pode usar objetos da classe std::ofstream juntamente com o operador de inserção (<<) para escrever dados de diferentes tipos no arquivo.
- std::fstream: É uma classe que representa um fluxo de arquivo bidirecional, permitindo tanto a leitura quanto a escrita de dados
em um arquivo. Pode ser usado para operações de leitura e escrita em um único arquivo.

A biblioteca <cstring> é uma biblioteca padrão do C++ que fornece várias funções para manipulação de strings e operações
relacionadas a cadeias de caracteres. A principal função da biblioteca <cstring> é trabalhar com strings como arrays de
caracteres. Ela inclui funções para copiar, concatenar, comparar e manipular strings de forma eficiente.

Aqui estão algumas das funções mais comuns fornecidas pela biblioteca <cstring>:
- strcpy(): Copia uma string de origem para uma string de destino.
- strcat(): Concatena duas strings, adicionando a segunda no final da primeira.
- strlen(): Retorna o comprimento de uma string.
- strcmp(): Compara duas strings e retorna um valor inteiro que indica a relação entre elas.
- strchr(): Localiza a primeira ocorrência de um caractere em uma string.
- strstr(): Localiza a primeira ocorrência de uma substring em uma string.
- memset(): Preenche um bloco de memória com um determinado valor.

<cstdlib> é uma biblioteca padrão do C++ que fornece várias funções relacionadas a operações de conversão de tipos,
geração de números aleatórios, alocação de memória dinâmica e controle de fluxo do programa.

Aqui estão algumas das principais funções fornecidas pela biblioteca <cstdlib>:
- atoi(), atol(), atoll(): Convertem uma string em um valor inteiro (atoi), longo (atol) ou longo longo (atoll).
- strtod(), strtof(), strtold(): Convertem uma string em um valor de ponto flutuante (strtod), ponto flutuante de precisão
simples (strtof) ou ponto flutuante de precisão estendida (strtold).
- rand(): Gera um número inteiro aleatório.
- srand(): Inicializa o gerador de números aleatórios com uma semente.
- malloc(), calloc(), realloc(), free(): Funções para gerenciamento de memória dinâmica. malloc aloca memória, calloc
aloca e inicializa a memória com zeros, realloc redimensiona a memória alocada e free libera a memória alocada.
- exit(): Termina o programa imediatamente.
- system(): Executa um comando do sistema operacional.