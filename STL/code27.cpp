//------------------UNORDERED MAP-------------------//
//it will not stored in sorted and will have unique keys
//works in O(1)
//worst case O(n)

#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered map of integers to strings
    std::unordered_map<int, std::string> myUnorderedMap;

    // Insert elements into the unordered map
    myUnorderedMap[1] = "apple";
    myUnorderedMap[2] = "banana";
    myUnorderedMap[3] = "cherry";
    myUnorderedMap[4] = "date";

    // Display the elements of the unordered map
    std::cout << "Elements in the unordered map:" << std::endl;
    for (const auto& elem : myUnorderedMap) {
        std::cout << elem.first << " -> " << elem.second << std::endl;
    }

    // Check if a key is in the map and access its value
    int searchKey = 2;
    if (myUnorderedMap.find(searchKey) != myUnorderedMap.end()) {
        std::cout << "\nKey " << searchKey << " found with value: " << myUnorderedMap[searchKey] << std::endl;
    } else {
        std::cout << "\nKey " << searchKey << " not found." << std::endl;
    }

    // Remove an element by key
    myUnorderedMap.erase(3);

    // Display the elements of the unordered map after removal
    std::cout << "\nElements in the unordered map after removal of key 3:" << std::endl;
    for (const auto& elem : myUnorderedMap) {
        std::cout << elem.first << " -> " << elem.second << std::endl;
    }

    return 0;
}
