//-----------------------UNORDERED SET-----------------------//
//----Random order but UNIQUE----//
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include <set>
#include<unordered_set>
using namespace std;

//randomised order and unique (no idea how it will store any order);
// most cases time complexity is O(1) but lowerbound and upperbound functions dont work.

int main() {
    // Create an unordered set of integers
    std::unordered_set<int> mySet;

    // Insert elements into the unordered set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);

    // Attempting to insert a duplicate element (will not be added)
    mySet.insert(20);

    // Display the elements of the unordered set
    std::cout << "Elements in the unordered set: ";
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if an element is in the set
    int searchElement = 30;
    if (mySet.find(searchElement) != mySet.end()) {
        std::cout << searchElement << " is in the set." << std::endl;
    } else {
        std::cout << searchElement << " is not in the set." << std::endl;
    }

    // Remove an element from the set
    mySet.erase(20);

    // Display the elements of the unordered set after removal
    std::cout << "Elements in the unordered set after removal: ";
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}