//Bubble Sort
//pushes maximum to the last - just opposite to selection sort

// PICK 2 ADJECENT IF UNSORTED SWAP
/*

13 | 46 | 24 | 52 | 20 | 09 - unordered
13 | 24 | 46 | 52 | 20 | 09 
13 | 24 | 46 | 20 | 52 | 09 
13 | 24 | 46 | 20 | 09 | 52 
13 | 24 | 20 | 46 | 09 | 52 
13 | 24 | 20 | 09 | 46 | 52 
13 | 20 | 24 | 09 | 46 | 52 
13 | 20 | 09 | 24 | 46 | 52 
.
.
.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> bubble_sort(vector<int> array){
    int n = array.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                swap(array[j],array[i]);
            }
        }
    }
    return array;
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

    vector<int> output = bubble_sort(input);
    cout << "Output vector:" << endl;
    for(int num : output) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}


//TIME COMPLEXITY ANALYSIS
/*

O(n^2)- worst case
O(n)  - best case

*/