//LIKE GIVEN AN ARRAY HOW MANY TIMES A NUMBER APPEAR?

// brute force method using for loop
#include<iostream>
using namespace std;
int function(int number, int n, int arr[]){
    int counter = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==number){
            counter+=1;
        }
    }
    return counter;
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<< "Enter array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to find frequency:";
    int number;
    cin>>number;
}

//This is not hashing
