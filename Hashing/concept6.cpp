//unordered map - O(1) - TC
//stores in randomised order that varies.....




#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

//map stores all in sorted order
//Lets iterate in the map
    for(auto it : mpp){
        cout<< it.first <<" -> "<<it.second <<endl; //array element (sorted)-> frequency
    }


    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
}



/*

Using an unordered_map over a map in C++ (or similar structures in other programming languages) has several benefits, particularly in terms of performance and use cases:

Faster Average Time Complexity:

unordered_map provides average O(1) time complexity for insertions, deletions, and lookups due to its underlying hash table implementation.
map provides O(log n) time complexity for these operations because it uses a balanced binary search tree (typically a red-black tree).
Efficiency for Large Data Sets:

For large data sets where frequent insertions and lookups are needed, unordered_map can be significantly faster due to its constant average time complexity.
Simplicity in Key Order:

If the order of elements doesn't matter, unordered_map is simpler to use since it doesn't maintain any order of keys. This can be an advantage in scenarios where only key-value association is important.
Memory Usage:

unordered_map may use less memory for some cases, as it doesn't need to store additional information to maintain the order, which is required by the tree structure in map.
However, it's important to note some potential downsides of using unordered_map:

Worst-Case Time Complexity:

The worst-case time complexity for unordered_map operations can degrade to O(n) if many keys hash to the same value (hash collisions). This is rare but possible depending on the hash function and data distribution.
Order of Elements:

unordered_map doesn't maintain any order of the elements. If you need elements to be stored in a sorted order, map is the better choice as it maintains elements in a specific order.
Iterator Invalidation:

Certain operations on unordered_map may invalidate iterators more frequently than on a map.


*/
