//----------------VECTOR RETURN TYPE FUNCTION-----------------------//

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> function(vector<int>& v1){

//---------------Range-Based For Loop----------------//
    for (auto& i : v1) {
        i = i * i;
    }

//----------------Iterator Loop-----------------//
        for (auto i = v1.begin(); i != v1.end(); ++i) {
        *i = (*i) * (*i);
    }
    return v1;
}

int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    vector<int>v1;
    cout<< "Enter for v1 "<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    vector<int>v2 = function(v1);
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
}