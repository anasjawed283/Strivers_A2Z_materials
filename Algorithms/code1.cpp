#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {

    // Example 1: Sorting and searching
    vector<int> numbers = {5, 2, 8, 1, 9, 3};

    sort(numbers.begin(), numbers.end()); // Sort in ascending order

    if (binary_search(numbers.begin(), numbers.end(), 8)) {
        cout << "Element 8 exists in the vector.\n";
    } else {
        cout << "Element 8 does not exist in the vector.\n";
    }



    // Example 2: Copying elements
    vector<int> copied_numbers(numbers.size());

    copy(numbers.begin(), numbers.end(), copied_numbers.begin());

    cout << "Copied vector: ";
    for (int num : copied_numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Example 3: Finding and counting elements
    auto it = find(numbers.begin(), numbers.end(), 9);

    if (it != numbers.end()) {
        cout << "Element 9 found at index " << distance(numbers.begin(), it) << ".\n";
    }
    int count_of_8 = count(numbers.begin(), numbers.end(), 8);
    cout << "Count of 8 in the vector: " << count_of_8 << "\n";


    // Example 4: Reversing elements
    reverse(numbers.begin(), numbers.end());
    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Example 5: Accumulating elements
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of elements in the vector: " << sum << "\n";

    // Example 6: Merging sorted vectors
    vector<int> sorted_numbers = {4, 6, 7};
    vector<int> merged_numbers;

    merge(numbers.begin(), numbers.end(), sorted_numbers.begin(), sorted_numbers.end(), back_inserter(merged_numbers));
    
    cout << "Merged and sorted vector: ";
    for (int num : merged_numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Example 7: Filling elements with a value
    fill(numbers.begin(), numbers.end(), 10);
    cout << "Filled vector with 10: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Example 8: Applying a transformation
    vector<int> transformed_numbers;
    transform(numbers.begin(), numbers.end(), back_inserter(transformed_numbers), [](int x) { return x * 2; });
    cout << "Transformed vector: ";
    for (int num : transformed_numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Example 9: Removing consecutive duplicates
    vector<int> duplicate_numbers = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    auto last = unique(duplicate_numbers.begin(), duplicate_numbers.end());
    duplicate_numbers.erase(last, duplicate_numbers.end());
    cout << "Vector after removing consecutive duplicates: ";
    for (int num : duplicate_numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Example 10: Partitioning elements
    vector<int> partitioned_numbers = {1, 2, 3, 4, 5};
    auto pivot = partition(partitioned_numbers.begin(), partitioned_numbers.end(), [](int x) { return x % 2 == 0; });
    cout << "Partitioned vector with even numbers on left: ";
    for (int num : partitioned_numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Examples 11 and 12: Next and previous permutations
    vector<int> permuted_numbers = {1, 2, 3};
    next_permutation(permuted_numbers.begin(), permuted_numbers.end());
    cout << "Next permutation: ";
    for (int num : permuted_numbers) {
        cout << num << " ";
    }
    cout << "\n";

    prev_permutation(permuted_numbers.begin(), permuted_numbers.end());
    cout << "Previous permutation: ";
    for (int num : permuted_numbers) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
