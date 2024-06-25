#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Creating a Vector:
    vector<int> myVector; // Creates an empty integer vector

    // Initializing a Vector:
    vector<int> numbers = {1, 2, 3, 4, 5}; // Initialization using an initializer list
    vector<int> anotherVector(5, 42);      // Initializes a vector with 5 elements, all set to 42

    // Accessing Elements:
    int value = myVector[0];           // Accessing the first element
    int anotherValue = myVector.at(1); // Accessing the second element

    // Modifying Elements:
    vector<int> modifyvec = {1, 2, 3, 4, 5};
    modifyvec.at(2) = 10;  // Modifying the third element

    // Iterating Over a Vector:
    for (auto it = myVector.begin(); it != myVector.end(); ++it)
    {
        // Access element using '(*it)'
        // ...
    }
    for (const auto &element : myVector)
    {
        // Access 'element'
        // ...
    }
}
