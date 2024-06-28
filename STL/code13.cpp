//-------------------CREATING FUNCTIONS TAKING VECTOR-------------------//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int function(vector<int>& v1, vector<int>& v2){

    int sum1=0;
    int sum2=0;
    for(auto i=v1.begin();i!=v1.end();i++){
        sum1 = sum1 + *i;
    }
    for(auto i=v2.begin();i!=v2.end();i++){
        sum2 = sum2 + *i;
    }
    
    (sum1 > sum2) ? cout<< sum1 <<" is greater which is sum of 1st vector." : cout<<sum2<<" is greater which is sum of 2nd vector.";

}
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    cout<< "Enter for v1 "<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    cout<< "Enter for v2 "<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v2.push_back(num);
    }
    function(v1,v2);

}