#include <iostream>
#include <utility>
using namespace std;

//PAIRS ----------
// Function to find the maximum element in a pair
// template <typename T> // This function works with any data type T

int findMax(const pair<int , int> &p){
    return (p.first > p.second) ? p.first : p.second;
}

int main(){
    pair<int, int> numbers = {15, 3};
    int max_element = findMax(numbers);
    cout << "Maximum element in the pair: " << max_element << endl;
    return 0;
}
