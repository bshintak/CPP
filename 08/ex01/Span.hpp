#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
private:
    unsigned int N;
    std::vector<int> numbers;

public:
    Span();
    ~Span();
    Span(unsigned int size);
		Span(const Span &src);
    Span &operator=(const Span &src);

    int shortestSpan() const;
    int longestSpan() const;
    void addNumber(int number);
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
