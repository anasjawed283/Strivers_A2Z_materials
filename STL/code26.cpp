//------------------------------------MULTIMAP---------------------------------//
////duplicate key butt in sorted order
#include <iostream>
#include <map>

int main() {
    // Create a multimap of integers to strings
    std::multimap<int, std::string> myMultimap;

    // Insert elements into the multimap
    myMultimap.insert({1, "apple"});
    myMultimap.insert({2, "banana"});
    myMultimap.insert({1, "apricot"});
    myMultimap.insert({3, "cherry"});
    myMultimap.insert({2, "blueberry"});

    // Display the elements of the multimap
    std::cout << "Elements in the multimap:" << std::endl;
    for (const auto& elem : myMultimap) {
        std::cout << elem.first << " -> " << elem.second << std::endl;
    }

    // Find all elements with a specific key
    int searchKey = 2;
    std::cout << "\nElements with key " << searchKey << ":" << std::endl;
    auto range = myMultimap.equal_range(searchKey);
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << " -> " << it->second << std::endl;
    }

    // Remove all elements with a specific key
    myMultimap.erase(searchKey);

    // Display the elements of the multimap after removal
    std::cout << "\nElements in the multimap after removal of key " << searchKey << ":" << std::endl;
    for (const auto& elem : myMultimap) {
        std::cout << elem.first << " -> " << elem.second << std::endl;
    }

    return 0;
}
