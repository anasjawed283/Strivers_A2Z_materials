//ERASE-----------------------

#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

int main(){
    vector<int>v2{10,20,30,40,50};
    vector<int>v1{10,20,30,40,50};

    for(auto i:v1){
        cout<< i << " ";
    }
    cout<<endl;
    for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*(i)<<" "<<endl;
    }

    v1.erase(v1.begin(), v1.end()-1);
    //v1.erase(v1.begin()); only first

    for(auto i:v1){
        cout<< i << " ";
    }
    
}