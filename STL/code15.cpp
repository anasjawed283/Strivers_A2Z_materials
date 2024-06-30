//--------------------LIST--------------------//
#include<iostream>
#include<vector>
#include<list>
#include<math.h>
#include<string>
using namespace std;

//LISTS - only difference with vectors is LIST gives you front operations as well. It is container dynamic in nature.
// all functions work here too

void explaiList(){

    list<int>ls;
    ls.push_back(33); //{33}
    ls.emplace_back(44);//{33, 44}
    ls.push_front(55);//{55,33,44}
    //ls.emplace_front(); {2,4}; //

}