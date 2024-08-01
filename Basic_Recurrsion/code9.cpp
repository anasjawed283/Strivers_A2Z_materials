//Functional recurrsion
#include<iostream>
using namespace std;

int function(int n){
    if(n==0){
        return n;
    }
    return n+function(n-1);
}

int function2(int n){
    if(n==0){
        return 0;
    }
    return n + function2(n-1);
}

int main(){
    int n =5;
    cout<<function(n);
    cout<<endl;
    cout<<function2(n);
}