#include "Span.hpp"

int main() {

  std::cout << "\033[1;31mSubject test:\033[0m" << std::endl;

  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "\033[1;31mAdding with full space:\033[0m" << std::endl;

  try{
		Span sp1 = Span(10);
		for(int i = 0; i < 11; i++)
			sp1.addNumber(i);
	}
	catch(const std::exception& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}

  std::cout << "\033[1;31mTries to get shortest Span of empty span:\033[0m" << std::endl;

  try{
		Span sp2 = Span(5);
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "\033[1;31mTries to get longest Span of empty span:\033[0m" << std::endl;

	try{
		Span sp3 = Span(5);
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
  std::cout << "\033[1;31mTries to add more numbers than max capacity:\033[0m" << std::endl;

	try{
		std::vector<int> v1;
		Span sp4 = Span(3);

		for (unsigned int i = 0; i < 5; i++)
			v1.push_back(i);
		sp4.addNumbers(v1.begin(), v1.end());
	}
	catch(const std::exception& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}

  std::cout << "\033[1;31mLarge range numbers:\033[0m" << std::endl;

  unsigned int n = 100000; 
	Span sp5 = Span(n);

	for (unsigned int i = 0; i < n; i++)
		sp5.addNumber(i);

	std::cout << sp5.shortestSpan() << std::endl;
	std::cout << sp5.longestSpan() << std::endl;

  std::cout << "\033[1;31mNegative numbers:\033[0m" << std::endl;

  Span sp6 = Span(5);

	sp6.addNumber(-1);
	sp6.addNumber(-2);
	sp6.addNumber(-3);
	sp6.addNumber(-5);
	sp6.addNumber(-100);

	std::cout << sp6.shortestSpan() << std::endl;
	std::cout << sp6.longestSpan() << std::endl;

  std::cout << "\033[1;31mRepeated numbers:\033[0m" << std::endl;

  Span sp7 = Span(5);

	sp7.addNumber(1);
	sp7.addNumber(1);
	sp7.addNumber(7);
	sp7.addNumber(15);
	sp7.addNumber(14);

	std::cout << sp7.shortestSpan() << std::endl;
	std::cout << sp7.longestSpan() << std::endl;

return 0;
}
