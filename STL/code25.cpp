//------------------------MAP functions---------------------//
#include <iostream>
#include <map>
//find specific key's value

int main() {
    std::map<int, int> myMap;

    // Insert some key-value pairs into the map
    myMap[1] = 10;
    myMap[2] = 20;
    myMap[3] = 30;

    // Specify the key you are interested in
    int targetKey = 3;

    // Find the iterator for the specified key
    auto it = myMap.find(targetKey);

    // Check if the key was found
    if (it != myMap.end()) {
        // Print the value associated with the key
        std::cout << "Value associated with key " << targetKey << ": " << it->second << std::endl;
    } else {
        std::cout << "Key " << targetKey << " not found in the map." << std::endl;
    }

    return 0;
}
