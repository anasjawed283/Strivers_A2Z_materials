/*

**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********

*/
#include<iostream>
using namespace std;

void function(int n){
    for(int i=0;i<n/2;i++){
        for(int j=0; j<=(n/2)-i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
            cout<<" ";
        }
        for(int j=0; j<=(n/2)-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(n/2)-i-1;j++){
            cout<<" ";
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){

    int n;
    n=10;
    function(n);
}