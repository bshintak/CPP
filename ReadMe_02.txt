Orthodox Canonical Class Form

Refere-se a um conjunto de regras ou diretrizes para a implementação de classes em C++. Essas diretrizes são baseadas em boas
práticas e ajudam a garantir que as classes sejam bem projetadas, fáceis de usar e livres de problemas comuns.

1. Construtor padrão (Default Constructor): Uma classe deve ter um construtor padrão que inicialize todos os membros da classe
para seus valores padrão. Isso garante que objetos da classe possam ser criados corretamente mesmo sem parâmetros adicionais.

2. Construtor de cópia (Copy Constructor): Uma classe deve ter um construtor de cópia que realize uma cópia profunda de todos
os membros da classe. Isso garante que, ao copiar um objeto para outro, cada membro seja copiado de forma independente e não
compartilhe referências.

3. Operador de atribuição (Assignment Operator): Uma classe deve ter um operador de atribuição que permita copiar o estado de
um objeto para outro. Assim como o construtor de cópia, o operador de atribuição deve garantir uma cópia profunda dos membros da classe.

4. Destrutor (Destructor): Uma classe deve ter um destrutor que seja responsável por liberar quaisquer recursos alocados pela
classe. Por exemplo, se a classe alocou memória dinamicamente, o destrutor deve liberar essa memória adequadamente.

5. Função "equals" ou "operator==" (Igualdade): É uma boa prática fornecer uma função ou operador de igualdade que permita
comparar dois objetos da mesma classe para verificar se eles têm o mesmo estado. Isso é útil para testes de igualdade e
algoritmos que dependem de comparações.

6. Função "toString" (Representação em string): É útil ter uma função que retorne uma representação em string do objeto. Isso pode
ser usado para depuração, exibição de informações para o usuário ou para serialização do objeto em um formato legível por humanos.

/----------------------------------------------------------------------------------------------------------------------------/

Fixed Point Number Representation

Pegando o numero 26.5 como exemplo:
2 * 10^1 + 6 * 10^0 + 5 * 10^-1 = 26.5
Em binario:
11010.1(base2)
= 1 * 24 + 1 * 23 + 0 * 22 + 1 * 21 + 0* 20 + 1 * 2-1
= 16 + 8 + 2 + 0.5
= 26.5

/----------------------------------------------------------------------------------------------------------------------------/

Um "operador" é uma espécie de ação que podemos realizar em valores ou variáveis. O operador de atribuição é um tipo
de operador que nos permite copiar o valor de uma variável para outra.

No caso específico, Fixed &Fixed::operator=(Fixed const &number) está definindo o operador de atribuição para a
classe Fixed. Isso significa que quando você usa o sinal de igual (=) para atribuir um objeto Fixed a outro objeto
Fixed, esse operador é usado para realizar a atribuição correta.

Por exemplo, se você tem dois objetos Fixed, chamados objeto1 e objeto2, e escreve objeto1 = objeto2, o operador de
atribuição será chamado. Ele irá copiar os valores do objeto objeto2 para o objeto objeto1, para que eles sejam iguais.

O operador de atribuição (operator=) é necessário nesse caso para permitir a atribuição correta de um objeto Fixed a outro objeto Fixed.

Quando você cria uma instância de um objeto Fixed e deseja copiá-lo para outro objeto Fixed, simplesmente usar o sinal
de igual (=) não seria suficiente. O operador de atribuição personalizado, definido como Fixed &Fixed::operator=(Fixed const &number),
garante que a atribuição seja feita corretamente, copiando os valores necessários.