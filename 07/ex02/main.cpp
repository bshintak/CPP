#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

void test_wrong_index()
{
	Array<int> arr(3);

	try	{
		arr[0] = 10;
		arr[1] = 20;
		std::cout << arr.size() << std::endl;
		std::cout << arr[0] << std::endl;
		std::cout << arr[1] << std::endl;
		std::cout << arr[5] << std::endl; // don't exist
		
	}
	catch (std::exception &e){
		std::cout << "Wrong Index" << std::endl;
	}
}

template<typename T>
void printArr(Array<T> arr)
{
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void test_copy(void)
{
	Array<int> arr1(2);
	arr1[0] = 10;
	arr1[1] = 20;
	Array<int> arr2(arr1); // arr2 = arr1
	Array<int> arr3;

    arr3 = arr1; // arr3 = arr1

	std::cout << "Array 1" << std::endl;
	printArr(arr1);
	std::cout << "Array 2" << std::endl;
	printArr(arr2);
	std::cout << "Array 3" << std::endl;
	printArr(arr3);

	arr1[0] = 300;
	arr1[1] = 400;
	std::cout << "Some changes..." << std::endl;
	std::cout << "Array 1" << std::endl;
	printArr(arr1);
	std::cout << "Array 2" << std::endl;
	printArr(arr2);
	std::cout << "Array 3" << std::endl;
	printArr(arr3);
	
}

class Teste{
	public:
	Teste(){
		std::cout << "Default constructor" << std::endl;
	}
	~Teste(){
		std::cout << "Destructor" << std::endl;
	}
};

void test_class(void)
{
	Array<Teste> arr(3);
}

void runAdditionalTest() {
    try {
        int* a = new int();
        std::cout << "*a: " << *a << std::endl;
        delete a;
    } catch(const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << '\n';
    }
}


int main(int, char**)
{
    std::cout << "\033[32mSubject test\033[0m" << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    
    std::cout << "\033[32mWrong index test:\033[0m" << std::endl;
    test_wrong_index();
    std::cout << "\033[32mCopy array test:\033[0m" << std::endl;
    test_copy();
    std::cout << "\033[32mClass test:\033[0m" << std::endl;
    test_class();
    std::cout << "\033[32mAdditional test:\033[0m" << std::endl;
    runAdditionalTest();
    
    return 0;
}