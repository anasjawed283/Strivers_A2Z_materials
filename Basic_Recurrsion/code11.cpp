//REVERSE AN ARRAY USING RECURRSION
#include<iostream>
#include <iostream>
using namespace std;

////General reverse
// void reverse1(int n, int arr[]) {
//     for (int i =n-1; i>=0; i--) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     reverse1(n, arr);
//     return 0;
// }


//SWAP and again
// 2 pointers are there that swap content then change position when they cross stop

void function(int i, int arr[], int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    function(i+1, arr, n);
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    function(0, arr, n);
    
    for (int i = 0; i < n; i++) {
        cout<< arr[i];
    }
    return 0;

}