/*
A 65
B 66
C 67
D 68
E 69
........
*/
/*

A
AB
ABC
ABCD
ABCDE

*/
#include<iostream>
using namespace std;

void function(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    function(n);
}