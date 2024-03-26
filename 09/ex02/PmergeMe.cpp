#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
  *this = other;
}

PmergeMe & PmergeMe::operator=(const PmergeMe& op) {
  if (this != &op) {
		this->list = op.list;
		this->vector = op.vector;
		this->listSortTimeSec = op.listSortTimeSec;
		this->vectorSortTimeSec = op.vectorSortTimeSec;
	}
	return *this;
}

void PmergeMe::sortList(char **args, int size) {
    clock_t start_time = clock(); // Tempo inicial
    int num;

    std::cout << "Lista antes da ordenação:";
    for (int i = 0; i < size; ++i) {
      // list.push_back(std::atoi(args[i]));
      num = std::atoi(args[i]);
      list.push_back(num);
      std::cout << " " << num;
    }
    std::cout << std::endl;

    // Ordenando a lista usando o merge sort
    list = mergeSortList(list.begin(), list.end());

    // Calculando o tempo decorrido
    listSortTimeSec = static_cast<double>(clock() - start_time) / CLOCKS_PER_SEC;

    std::cout << "Lista após a ordenação:";
    std::list<int>::iterator it;
    for (it = list.begin(); it != list.end(); ++it) {
      std::cout << " " << *it;
    }
    std::cout << std::endl;

    std::cout << "Tempo de ordenação: " << listSortTimeSec << " segundos" << std::endl;
}

std::list<int> PmergeMe::mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end) {
    std::list<int> res;
    if (std::distance(begin, end) <= 3) {
        res.assign(begin, end); // Copia os elementos para res
        sortListInsertion(res); // Chama a função para ordenar
        return res;
    }
    std::list<int>::iterator midIt = begin;
    std::advance(midIt, std::distance(begin, end) / 2);
    std::list<int> l1 = mergeSortList(begin, midIt);
    std::list<int> l2 = mergeSortList(midIt, end);
    res.merge(l1);
    res.merge(l2);
    return res;
}

void PmergeMe::sortListInsertion(std::list<int> &list) {
  if (list.size() <= 1)
    return;

  std::list<int>::iterator it = ++list.begin();

  while (it != list.end()) {
    std::list<int>::iterator it1 = it;
    while (it1 != list.begin() && *(--it1) > *it) {
      int temp = *it1;
      *it1 = *it;
      *it = temp;
      --it;  // Volta o iterador
    }
    ++it;
  }
}

