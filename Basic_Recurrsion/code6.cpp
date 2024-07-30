//BAsic recurrsion
//BACKTRACKING METHOD

#include<iostream>
using namespace std;

//BACKTRACKING - printing linearly even starting from last not necessarly 1
void function1(int i, int n){
    if(i<1){
        return;
    }
    function1(i-1, n);
    cout<<i<<" ";
}

//BACKTRACKING
void function2(int i, int n){
    if(i>10){
        return;
    }
    function2(i+1, n);
    cout<<i<<" ";
}

int main() {
    int n = 10;
    function1(n,n);
    cout<<endl;

    int i = 1;
    function2(i,i);
    return 0;
}
