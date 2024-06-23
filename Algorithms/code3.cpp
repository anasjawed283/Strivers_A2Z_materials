//what if we need to sort
// directly use in STL 
//sort(a, a+n);
//sort(v.begin(),v.end());
//sorting only a specific portion -> sort(a+2, a+4);
//sort in descending order (a, a+n, greater<int>); // comparater shit

//Sorting in my order
/*
sort according to second element, if second element is same then sort it according to first element but in descending
pair<int,int>a[]={{1,2},{2,1},{4,1}};
*/

#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include <set>
#include<map>
using namespace std;

bool comp(pair<int, int>p1, pair<int,int>p2){
    //this has to return a true or false
    if(p1.second <p2.second) return true;
    if(p1.second>p2.second) return false;
    //only case lest that they are same
    if(p1.first>p2.first) return true;
    return false;
}

int main(){
    pair<int,int>a[]={{1,2},{2,1},{4,1}};
    //sort(a, a+n, comp); //self written comparater
}