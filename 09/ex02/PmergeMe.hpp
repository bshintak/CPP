#pragma once

#include <iostream>
#include <list>
#include <vector>
#include <cstdlib>

class PmergeMe {
  private:
		std::list<int>		list;
		std::vector<int>	vector;

    double				listSortTimeSec;
		double				vectorSortTimeSec;

    public:
		  PmergeMe();
	  	PmergeMe(const PmergeMe& other);
		  ~PmergeMe();
		  PmergeMe & operator=(const PmergeMe& op);

      void  sortList(char **args, int size);
      std::list<int>  mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end);
      void  sortListInsertion(std::list<int> &list);
};
