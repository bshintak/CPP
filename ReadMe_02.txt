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