//Merge sort//
/*

3 1 2 4 1 5 2 6 4

algorithm divides the array in 2 parts - bigger and smaller (so follow the same pattern)

3 1 2 4 1 |      5 2 6 4
    /  \           / \
3 1 2   4 1      5 2  6 4
 /  \   / \      / \  / \
3 1  2  4  1    5  2  6  4   now we merge take 2 and sort and place on the crct position
/  \            \  /  \  /
3   1            2 5   4 6
\   /            2 4 5 6
 1 3
 1 2 3
 1 1 2 3 4
 1 1 2 2 3 4 4 5 6


Pseducode - 
Instead of breaking we play with index - 
we make 2 index
low - starting index of 1st array
high - last index of hypothetical array (last index)

What we do?

mergeSort(arr, low, high){
    if(low>=high) return;
    mid = (low+higj)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid high)
}
*/

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<high ; i++){
        arr[i] = temp[i-low];
    }
}
void mergesort(vector<int> &arr, int low, int high){
    if(low == high) return;

    int mid = (low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
