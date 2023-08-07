O polimorfismo é um dos quatro pilares da programação orientada a objetos (POO) e é uma característica poderosa que
permite tratar objetos de classes diferentes de maneira uniforme, simplificando e tornando o código mais flexível e extensível.
O termo "polimorfismo" vem das palavras gregas "poly" (muitos) e "morphos" (formas), que significam "muitas formas".

Em essência, o polimorfismo permite que um objeto seja tratado como se fosse de um tipo diferente, desde que esse tipo
pertença a uma hierarquia de classes relacionadas. Isso ocorre principalmente através do uso de funções virtuais e ponteiros
ou referências de classes base.

Há dois tipos principais de polimorfismo em C++:

1. Polimorfismo de tempo de compilação (também conhecido como sobrecarga de função): Isso ocorre quando você usa a mesma
função com diferentes parâmetros ou tipos de dados. O compilador selecionará a função correta com base nos argumentos passados
durante a compilação. Exemplo:

void printValue(int x) {
    std::cout << "Integer value: " << x << std::endl;
}

void printValue(double y) {
    std::cout << "Double value: " << y << std::endl;
}

int main() {
    int a = 5;
    double b = 3.14;

    printValue(a); // Chamará a versão com int como argumento
    printValue(b); // Chamará a versão com double como argumento

    return 0;
}

Polimorfismo de tempo de execução (também conhecido como polimorfismo dinâmico): Isso ocorre quando você tem uma hierarquia
de classes, com uma classe base e uma ou mais classes derivadas, e usa funções virtuais. Isso permite que você chame métodos
de uma classe derivada através de um ponteiro ou referência à classe base, e o método correto será chamado em tempo de execução.
Isso é alcançado usando a palavra-chave virtual nas funções da classe base. Exemplo:

class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape* shape1 = &circle;
    Shape* shape2 = &square;

    shape1->draw(); // Chamará a função draw() da classe Circle
    shape2->draw(); // Chamará a função draw() da classe Square

    return 0;
}

No exercicio 02 temos que tornar a classe não instanciável, para isso, é comum usar um conceito chamado de classe abstrata,
que é uma classe que possui pelo menos uma função virtual pura. Funções virtuais puras são declaradas na classe base sem uma
implementação e devem ser implementadas nas classes derivadas. Isso impede que a classe base seja instanciada por si só, pois
ela se torna incompleta e serve apenas para fornecer uma interface para as classes derivadas:

virtual void  makeSound(void) const = 0;
(pura por conta do "= 0")
