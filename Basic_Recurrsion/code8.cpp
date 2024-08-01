//BASIC Recurrsion
//Sum of n natural numbers

#include<iostream>
using namespace std;

//PARAMETERISED WAY
void function(int n,int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    function(n-1, sum+i);
}

int main(){
    int n = 5;
    function(n, 0);
    cout<<endl;
}