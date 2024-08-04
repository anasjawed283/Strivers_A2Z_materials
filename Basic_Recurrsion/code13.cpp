//MULTIPLE RECURRSION//
//PRINT nth fibonacchi number

//0 1 1 2 3 5 8 13 21
#include<iostream>
using namespace std;

int fibonacchi(int n){
    if(n<=1){
        return n;
    }
    //fibo(n) = fibo(n-1) +fibo(n-2);
    return fibonacchi(n-1) + fibonacchi(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacchi(n);
}

//Time complexity ?

// for ever n you call 2 recurrsion - exponential