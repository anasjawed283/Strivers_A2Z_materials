//--------------------MAP EXAMPLE-------------------//
#include <iostream>
#include <map>
//print all values with there keys


int main() {
    std::map<int, int> myMap;

    // Insert some key-value pairs into the map
    myMap[1] = 10;
    myMap[2] = 20;
    myMap[3] = 30;

    // Print keys and their corresponding values
    std::cout << "Keys and their corresponding values in the map:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
