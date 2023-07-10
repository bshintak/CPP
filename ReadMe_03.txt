Respondendo a pergunta do subject (ex01): "When a ScavTrap is created, the program starts by building a ClapTrap. Destruction is
in reverse order. Why?"

Quando você herda uma classe em C++, o destrutor da classe derivada é chamado antes do destrutor da classe base. Isso ocorre
porque, durante a destruição de um objeto, o processo começa pelo objeto mais específico (a classe derivada) e, em seguida,
passa para o objeto mais genérico (a classe base).

A classe ScavTrap deriva da classe ClapTrap. Ao criar um objeto ScavTrap, o construtor da classe base ClapTrap é chamado primeiro.
No entanto, durante a destruição do objeto ScavTrap, o processo segue uma ordem inversa.

Isso ocorre porque, por padrão, o destrutor da classe base não é virtual. Quando um destrutor não é declarado como virtual,
o compilador não realiza a chamada dinâmica do destrutor da classe derivada. Portanto, durante a destruição de um objeto de uma
classe derivada, apenas o destrutor da classe base é chamado.

/----------------------------------------------------------------------------------------------------------------------------/

Membros private:
- Os membros declarados como private são acessíveis somente dentro da própria classe.
- Eles não podem ser acessados por outras classes ou partes do código externas à classe.
- Geralmente, os membros private são usados para encapsular e proteger dados e funcionalidades internas da classe,
tornando-os inacessíveis a outros componentes do programa.

Membros protected:
- Os membros declarados como protected são acessíveis dentro da própria classe e pelas classes derivadas (subclasses) que
herdam dessa classe.
- Os membros protected não podem ser acessados por partes do código externas que não sejam subclasses da classe.
- O modificador protected é útil quando você deseja permitir que as classes derivadas acessem e modifiquem certos membros,
mas ainda deseja ocultar esses membros de outras partes do código externo.
