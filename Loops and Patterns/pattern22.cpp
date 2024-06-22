/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/
//n=4 then size = 4*2 -1 =7
#include<iostream>
using namespace std;

void function(int n){
    int size = 2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<n-min(min(i,j),min(size-i-1,size-j-1));
        }
        cout<<endl;
    }
}
int main(){
    function(5);
    return 0;
}