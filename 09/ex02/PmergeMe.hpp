#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <cstdlib>
#include <algorithm>

class PmergeMe {
  private:
	std::list<int>		list;
	std::deque<int>		deque;

    double				listSortTimeSec;
	double				dequeSortTimeSec;

    public:
		PmergeMe();
	  	PmergeMe(const PmergeMe& other);
		~PmergeMe();
		PmergeMe & operator=(const PmergeMe& op);

      	void			sortList(char **args, int size);
      	std::list<int>  mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end);
      	void  			sortListInsertion(std::list<int> &list);

		void			sortDeque(char **args, int size) ;
		std::deque<int>	mergeSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end);
		void			sortDequeInsertion(std::deque<int> &deque);
};
