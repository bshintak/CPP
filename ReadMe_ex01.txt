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