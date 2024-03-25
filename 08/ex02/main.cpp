#include "MutantStack.hpp"

int main()
{
  std::cout << "\033[1;35mSubject test:\033[0m" << std::endl;
  MutantStack<int> mstack; // creates an instance of the MutantStack class
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl; // prints the top element of the stack (17)
  mstack.pop(); // removes the top element of the stack
  std::cout << mstack.size() << std::endl; // prints the size of the stack
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin(); // initializes it to the begin of the stack
  MutantStack<int>::iterator ite = mstack.end(); // initializes it to the end of the stack
  ++it;
  --it;
  while (it != ite) {
    std::cout << it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);

  std::cout << "\033[1;35mConst stack test:\033[0m" << std::endl;

  MutantStack<int> mstack_const;
	MutantStack<int>::const_iterator it_const;

	for (int i = 0; i < 10; i++)
		mstack_const.push(i);

	const MutantStack<int> constStack (mstack_const);

	for(it_const = constStack.begin(); it_const != constStack.end(); it_const++)
		std::cout << *it_const << " ";
	std::cout << std::endl;

  std::cout << "\033[1;35mA lot of numbers test:\033[0m" << std::endl;

  MutantStack<int> mstack_num;
	MutantStack<int>::iterator it_num;

	for (int i = 0; i < 100; i++)
		mstack_num.push(i);

	for(it_num = mstack_num.begin(); it_num != mstack_num.end(); it_num++)
		std::cout << *it_num << " ";
	std::cout << std::endl;

	std::cout << "size: " << mstack_num.size() << std::endl;
	for (int i = 0; i < 100; i++) // remove all elements
		mstack_num.pop();
	std::cout << "size: " << mstack_num.size() << std::endl;

  return 0;

}
