//SELECTION SORT - select and swap

/*

Select the minimum element from the array and place it to the first position and replace its position with the first element.
Select minimum and swap

13 46 24 52 20 09 - unsorted array
09 46 24 52 20 13 - step 1

move pointer to next position

09 13 24 52 20 46 - step 2
09 13 20 52 24 46 - step 3
09 13 20 24 52 46 - step 4
09 13 20 24 46 52 - step 5


SWAP happens at index i with index of minimum element after that index.
*/

#include<iostream>
#include<vector>
using namespace std;


vector<int> selection_sort(vector<int> array){
    int n=array.size();
    for(int i=0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1 ; j < n; j++){
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
        }
        swap(array[i],array[minIndex]);
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

    vector<int> output = selection_sort(input);
    cout << "Output vector:" << endl;
    for(int num : output) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

/*


Time Complexity Analysis

1. Outer Loop (i loop):
- The outer loop runs from `i = 0` to `i = n - 2`. This gives us `n - 1` iterations.

2. Inner Loop (j loop):
- For each iteration of the outer loop, the inner loop runs from `j = i + 1` to `j = n - 1`.
- The number of iterations of the inner loop depends on the current value of `i`. When `i = 0`, the inner loop runs `n - 1` times. When `i = 1`, it runs `n - 2` times, and so on.

3. Total Comparisons:
- The total number of comparisons made by the inner loop over all iterations of the outer loop can be calculated as:
\[n-1) + (n-2) + (n-3) + \ldots + 1 = \frac{n(n-1)}{2}\]
- This summation is an arithmetic series, and its sum is \(\frac{n(n-1)}{2}\).

Big-O Notation
- When expressing time complexity in Big-O notation, we focus on the term with the highest growth rate and ignore constant factors and lower-order terms.
- For selection sort, the dominant term is \(\frac{n(n-1)}{2}\), which simplifies to \(O(n^2)\).

Best, Average, and Worst Case
- Best Case: \(O(n^2)\)
- Even if the array is already sorted, selection sort will still go through all comparisons.

- Average Case: \(O(n^2)\)
- The algorithm always performs the same number of comparisons regardless of the input order.

- Worst Case: \(O(n^2)\)
- The worst-case scenario also involves performing \(\frac{n(n-1)}{2}\) comparisons.

Summary
- Time Complexity: \(O(n^2)\)
- Space Complexity: \(O(1)\) (selection sort is an in-place sorting algorithm, meaning it does not require additional memory proportional to the input size)
*/