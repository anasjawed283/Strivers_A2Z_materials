//MAP

#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

//map stores all in sorted order
//Lets iterate in the map
    for(auto it : mpp){
        cout<< it.first <<" -> "<<it.second <<endl; //array element (sorted)-> frequency
    }


    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
}

