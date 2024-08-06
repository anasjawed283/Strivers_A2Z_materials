// INSERTION SORT
/*
Takes an element and place it in the correct order

14 09 15 12 06 08 13
09 14 15 12 06 08 13
09 12 14 15 06 08 13 - 12 is placed on the correct position rest is shifed to right
06 09 12 14 15 08 13 - swap is kept on done until placed in correct position
06 08 09 12 14 15 13
06 08 09 12 13 14 15

*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> insertion_sort(vector<int> arrays){
    int n = arrays.size();
    for (int i = 0; i <= n-1; i++) {
        int j = i;
        while (j > 0 && arrays[j-1] > arrays[j]) {
            swap(arrays[j], arrays[j-1]);
            j--;
        }
    }
    return arrays;
}
int main() {
    vector<int> input;
    int n, element;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    cout << "Enter the elements of the vector:" << endl;
    for(int i = 0; i < n; ++i) {
        cin >> element;
        input.push_back(element);
    }

    vector<int> output = insertion_sort(input);
    cout << "Output vector:" << endl;
    for(int num : output) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}