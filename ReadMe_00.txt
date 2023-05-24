Atributos: Os atributos são variáveis que representam as características ou propriedades do objeto.
Eles são declarados na seção pública (public) ou privada (private) da classe. Os atributos privados 
só podem ser acessados por métodos da própria classe, enquanto os públicos podem ser acessados 
diretamente de fora da classe.

Métodos: Os métodos são funções que definem o comportamento da classe. Eles são declarados dentro
da definição da classe e podem ser definidos dentro ou fora da classe. Os métodos podem acessar e
manipular os atributos da classe.

Construtores: Os construtores são métodos especiais chamados durante a criação de um objeto da classe.
Eles inicializam os atributos da classe. Um construtor tem o mesmo nome da classe e pode ter parâmetros.

Instanciação de objetos: Para usar uma classe, você precisa criar instâncias (objetos) dela.
Isso é feito declarando uma variável do tipo da classe.

Construtores:
- Um construtor é um método especial em uma classe que é chamado automaticamente quando um objeto
dessa classe é criado.
- O objetivo principal de um construtor é inicializar os atributos da classe, definindo seus valores iniciais.
- O construtor tem o mesmo nome da classe e não possui um tipo de retorno, nem mesmo void.
- Em uma classe, você pode ter vários construtores com diferentes parâmetros, o que permite a criação de
objetos de diferentes maneiras.
- Se nenhum construtor for definido explicitamente na classe, o compilador C++ fornecerá um construtor padrão vazio.

Destrutores:
- Um destrutor é um método especial em uma classe que é chamado automaticamente quando um objeto dessa classe é destruído.
- O objetivo principal de um destrutor é liberar recursos alocados pelo objeto durante sua vida útil, como memória alocada
dinamicamente ou fechar conexões com banco de dados.
- O destrutor tem o mesmo nome da classe, precedido por um til (~) e não possui parâmetros.
- Assim como o construtor, se nenhum destrutor for definido explicitamente na classe, o compilador C++ fornecerá um
destrutor padrão vazio.

Funções:

std::getline é uma função da biblioteca padrão do C++ que permite a leitura de uma linha inteira de entrada, incluindo
espaços em branco, até que seja encontrada uma quebra de linha ou o limite máximo de caracteres seja atingido.

std::getline(std::istream& input, std::string& line, char delimiter = '\n');

input: Referência para o fluxo de entrada de onde a linha será lida. Pode ser std::cin para a entrada padrão (teclado)
ou um objeto de arquivo para leitura a partir de um arquivo.

line: Referência para uma variável do tipo std::string onde a linha lida será armazenada.

delimiter (opcional): Caractere delimitador que indica onde a leitura deve parar. O valor padrão é a quebra de linha ('\n').

/----------------------------------------------------------------------------------------------------------------------------/

std::setw é uma função da biblioteca padrão do C++ que permite definir a largura do campo de saída ao usar a biblioteca <iomanip>.
Essa função é frequentemente usada em conjunto com a função std::setfill para formatar a saída em colunas alinhadas.

#include <iomanip>
std::setw(int n);

n: Um valor inteiro que representa a largura do campo de saída.
