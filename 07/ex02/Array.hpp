#pragma once

#include <cstddef>  // Para size_t
#include <stdexcept>  // Para std::out_of_range
#include <cstdlib>  // Para srand e rand
#include <ctime>    // Para time

// essa classe  incorpora e gerencia um array alocado dinamicamente. Isso significa que a
// classe é responsável pela alocação, desalocação e manipulação do array, proporcionando
// uma camada de abstração que facilita o uso e evita vazamentos de memória ou erros
// relacionados à gestão de memória

template <typename T>
class Array {
private:
    T* elements; // Ponteiro para os elementos do array
    size_t arraySize; // Número de elementos no array

public:
    // Construtor padrão
    Array() : elements(NULL), arraySize(0) {}

    // Construtor com tamanho especificado
    Array(size_t n) : arraySize(n) {
        if (n > 0) {
            elements = new T[n](); // Usa new[] para alocar memória e inicializa os elementos
        } else {
            elements = NULL;
        }
    }

    // Construtor de cópia
     Array(const Array& other) : elements(NULL), arraySize(0) {
        if (other.arraySize > 0) {
            elements = new T[other.arraySize](); // Usa new[] para alocar memória e inicializa os elementos
            for (size_t i = 0; i < other.arraySize; ++i) {
                elements[i] = other.elements[i];
            }
            arraySize = other.arraySize;
        }
    }

    // Operador de atribuição
    Array& operator=(const Array& other) {
        if (this != &other) { // Evita autoatribuição
            delete[] elements; // Libera a memória do array atual

            if (other.arraySize > 0) {
                elements = new T[other.arraySize](); // Usa new[] para alocar memória e inicializa os elementos
                for (size_t i = 0; i < other.arraySize; ++i) {
                    elements[i] = other.elements[i];
                }
                arraySize = other.arraySize;
            } else {
                elements = NULL;
                arraySize = 0;
            }
        }
        return *this;
    }

    // Destrutor
    ~Array() {
        delete[] elements; // Libera a memória alocada pelo array
    }

    // Acesso aos elementos por meio do operador []
    T& operator[](size_t index) {
        if (index < arraySize) {
            return elements[index];
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    // Função membro size()
    size_t size() const {
        return arraySize;
    }

};
