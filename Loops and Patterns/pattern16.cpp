/*

A
BB
CCC
DDDD
EEEEE

*/
#include<iostream>
using namespace std;
void function(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(65+i);
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int testcases;
    cout<<"Enter number of testcases: ";
    cin>>testcases;
    while(testcases--){
        int n;
        cin>>n;
        function(n);
    }
}