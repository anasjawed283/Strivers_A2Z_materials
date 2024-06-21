/*

ABCDE
ABCD
ABC
AB
A

*/

#include<iostream>
using namespace std;

void function(int n){

    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
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