//---------------MAP-----------------//
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include <set>
#include <map>
using namespace std;

// if there is multiple people named raj how will i distinguish ... by roll number
//1->a, 2->b, 3->c....
//roll number is key and name is value
//key is unique but values can be dublicate
//key can be any data type
//map stores unique key in sorted order

int main(){
    //map was same for all 3 in vid

    map<int,int>mp1; //----------------------map<key, value>mp;
    map<int, pair<int, int>>mp2;
    map<pair<int, int>, int>mp3;

    mp1[1]=2;
    mp1.emplace(make_pair(3, 1));
    mp1.insert({2,4});
    mp3[{2,3}] =10;

//----------------------traversing in a map----------------------//
    for(auto i: mp1){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<mp1[1]; // if not there will give null or 1


    auto i= mp1.find(3);
    cout<< i->second;
}