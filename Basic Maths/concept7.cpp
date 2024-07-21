/*

Prime Numbers------

Correct Definition - A number that has exactly 2 factors the number itself and 1

*/

#include<iostream>
#include<math.h>
using namespace std;

void check_prime(int n){
    int num = n;
    int counter = 0;
    for(int i=1;i<=(num/2);i++){
        if(num%i==0){
            counter++;
        }
    }
    if(counter==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
}

//square root method

void check_prime_optimized(int n){
    int num =n;
    int counter = 0;
    for(int i=1; i<= sqrt(num);i++){
        if(num%i==0){
            counter++;
            if((num/i)%i != 0){
                counter++;
            }
        }
    }
    if(counter==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
}

int main(){
    int n = 1;
    check_prime(n);
    cout<<endl;
    check_prime_optimized(n);
    return 0;
}