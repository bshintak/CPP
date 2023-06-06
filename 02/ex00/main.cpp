#include "Fixed.hpp"

int main(void)
{
	Fixed a; //cria um objeto
	Fixed b(a); //cria um novo objeto usando o constructor de copia (b inicia com os valores de a)
	Fixed c; //cria um objeto
	c = b; //usa o operador de atribuição "operator="
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << a.getRawBits() << std::endl;
	return 0;
}
