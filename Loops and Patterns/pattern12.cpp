/*

1      1
12    21
123  321
12344321

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(j+1);
        }
        
        for(int k=0;k<(n-i-1);k++){
            cout<<" ";
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<(i-j+1);
        }
        cout<<endl;
    }
    
}