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