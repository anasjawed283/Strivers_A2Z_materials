//HASHING IS PRESTORING SOMETHING AND FETCH WHEN REQUIRED

/*

ARRAY - [ 1 | 2 | 1 | 3 | 2 ]
HASH array - [0|0|0|0|0|0|0|0|0|0|0|0|0|0]
updating - [0 | 2 | 2 | 1 | 0]          0 comes 0 times, 1 comes 2 times

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    //precompute
    // max size that can be declared is 10^6 if in main.
    //declare globally can be done 10^7.
    int hash[13] = {0}; // max size is 12 so we take 13. based on the constraints we take
    for(int i = 0;i<n; i++){
        hash[arr[i]] += 1;
    }
    for(int i = 0;i<n;i++){

    }

    int q;
    cout<<"Enter Size: ";
    cin>>q;
    cout<<"Enter numbers to find"<<endl;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout << hash[number] << endl;
    }
}