/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

#include<iostream>
using namespace std;

void function(int n){
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        int spaces = (n-1) - i * 2;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
//-----------------------------------------------upper part and lower part
    for(int i=(n-1)/2;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }

        int spaces = 2 * ((n-1)/2 - i + 1);

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n = 9;
    function(n);
}