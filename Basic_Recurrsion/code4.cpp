//Basic Recurrsion
// Print linearly - n natural numbers

#include<iostream>
using namespace std;

void function(int i, int n){
    if(i>n){
        return;
    }
    cout<< i << endl;
    function(i+1, n);
}
int main(){
    int n = 20;
    int i=1;
    function(i,n);
}