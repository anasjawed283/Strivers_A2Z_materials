//-----------------------INSERT SWAPPING AND CLEARING VECTOR----------------------//

#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

int main(){
    vector<int>v={10,11,12,13,14,15};
    for(auto i:v){
        cout<< i << " ";
    }
    cout<<endl;
    cout<<"Using insert"<<endl;

//---------------------INSERT in vectors---------------------//

    v.insert(v.begin(), 300);
    for(auto i:v){
        cout<< i << " ";
    }
    cout<<endl;
//begin ke next position pe 2 baar 100 insert kr dia
    v.insert(v.begin()+1, 2, 100); 
    for(auto i:v){
        cout<< i << " ";
    }
    cout<<endl;

//-------------------------------inserting vector in the vector-------------------------------//
    vector<int>v2={99,88,77};

    v.insert(v.begin(), v2.begin(), v2.end());

    for(auto i:v){
        cout<< i << " ";
    }
    cout<<endl;

//----------------------------------Swapping 2 vectors-------------------------------//

    vector<int>va={1,2,3};
    vector<int>vb={9,8,7};
    va.swap(vb);
    for(auto i:va){
        cout<< i << " ";
    }
    cout<<endl;
    for(auto i:vb){
        cout<< i << " ";
    }
    v.clear(); //empties entire vector.
}