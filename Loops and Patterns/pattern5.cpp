/*

*****
****
***
**
*

*/



// #include<iostream>
// using namespace std;   //opposite

// int main(){

//     int n=5;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



#include<iostream>
using namespace std;

int main(){

    int n=5;

    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}