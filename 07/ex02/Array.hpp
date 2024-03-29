#pragma once

#include <cstddef>  // Para size_t
#include <stdexcept>  // Para std::out_of_range
#include <cstdlib>  // Para srand e rand
#include <ctime>    // Para time

template <typename T>
class Array {
private:
    T*              arr;
    unsigned int    arraySize;

public:
    Array() : arr(new T[0]), arraySize(0) {}

    Array(unsigned int n) : arr(new T[n]), arraySize(n) {}

    Array(const Array& other) {
        arraySize = other.arraySize;
        arr = new T[arraySize];
        for(unsigned int i = 0; i < arraySize; i++)
			arr[i] = other.arr[i];
    }

    Array& operator=(const Array& other) {
        if (this != &other)
		{
			delete[] arr;
			arraySize = other.arraySize;
			arr = new T[arraySize];
			for(unsigned int i = 0; i < arraySize; i++)
				arr[i] = other.arr[i];
		}
		return *this;
    }

    ~Array() {
        delete[] arr;
    }

    // Acesso aos elementos por meio do operador []
    T& operator[](unsigned int index) {
        if (index < arraySize) {
            return arr[index];
        } else {
            throw std::exception();
        }
    }

    const T& operator[](unsigned int index) const {
        if (index < arraySize) {
            return arr[index];
        } else {
            throw std::exception();
        }
    }

    unsigned int size() const {
        return arraySize;
    }

};
