//FACTORIAL OF A NUMBER USING RECURRSION

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return n;
    }
    return n*factorial(n-1);
}

int main(){
    int n = 10;
    cout<<factorial(n);
}