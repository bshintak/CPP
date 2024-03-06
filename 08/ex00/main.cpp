#include "easyfind.hpp"

int main() {

    std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);

    std::list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);

    std::set<int> mySet;
    mySet.insert(100);
    mySet.insert(200);
    mySet.insert(300);
    mySet.insert(400);
    mySet.insert(500);

    std::cout << "[ VECTOR ] -> ";
    try {
        std::vector<int>::iterator result = easyfind(myVector, 1);
        std::cout << "Value found at position: " << std::distance(myVector.begin(), result) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "[ LIST ] -> ";
    try {
        std::list<int>::iterator result2 = easyfind(myList, 30);
        std::cout << "Value found at position: " << std::distance(myList.begin(), result2) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "[ SET ] -> ";
    try {
        std::set<int>::iterator result3 = easyfind(mySet, 500);
        std::cout << "Value found at position: " << std::distance(mySet.begin(), result3) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Vector elements: ";
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "List elements: ";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Set elements: ";
    for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    
    return 0;
}

