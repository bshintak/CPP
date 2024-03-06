//  O termo "container" refere-se a estruturas de dados que armazenam e organizam elementos de maneira eficiente
// Containers são implementados em bibliotecas padrão de linguagens de programação para facilitar o gerenciamento de dados.
// Exemplos de containers: vector, list, array, etc

#pragma once // assegura que o conteúdo do header seja incluído apenas uma vez durante a compilação. É uma medida de precaução para evitar problemas de inclusão múltipla.

#include <vector> // std::vector
#include <list> // std::list
#include <set> // std::set
#include <iostream> // std::cout, std::cerr
#include <stdexcept> // std::runtime_error

template <typename T> //  a função easyfind pode aceitar diferentes tipos de containers, e o tipo é parametrizado com T
typename T::iterator easyfind(T& container, int value) { // o retorno (T::iterator) é basicamente a posição do valor que procuramos dentro do container
  for (typename T::iterator it = container.begin(); it != container.end(); it++) { // typename serve somente para o compilador saber que esta procurando algo especifico, nao qualquer iterator
        if (*it == value) {
            return it;
        }
    }
    
    throw std::runtime_error("Value not found in container");
}
