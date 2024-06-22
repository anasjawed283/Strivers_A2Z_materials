/*

E
DE
CDE
BCDE
ABCDE

*/
#include<iostream>
using namespace std;

void function(int n){
    for(int i=0;i<n;i++){
        for(int j=i; j>=0;j--){ //intial final reversed to reverse the pattern in a line
            cout<<char(69-j);
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    function(n);
}