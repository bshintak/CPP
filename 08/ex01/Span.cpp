#include "Span.hpp"

Span::Span() : N(0) {}

Span::~Span() {}

Span::Span(unsigned int size) : N(size) {
    numbers.reserve(N);
}

Span::Span(const Span &src) { // Copy Constructor
	*this = src;
}

Span &Span::operator=(const Span &src) { // Copy Assignment Operator
	this->N = src.N;
	this->numbers = src.numbers;
	return (*this);
}

void Span::addNumber(int number) {
    if (numbers.size() >= N) {
        throw std::overflow_error("Cannot add more numbers, the span is full.");
    }
    numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (numbers.size() <= 1) {
        throw std::runtime_error("Not enough numbers to calculate span.");
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }

    return minSpan;
}

int Span::longestSpan() const {
    if (numbers.size() <= 1) {
        throw std::runtime_error("Not enough numbers to calculate span.");
    }

    return *std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end());
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) > static_cast<long>(N - numbers.size())) { // std::distance - usada para calcular a distância (ou diferença) entre dois iteradores ou ponteiros
        throw std::overflow_error("Not enough space in the span to add these numbers.");
    }

    numbers.insert(numbers.end(), begin, end);
}
