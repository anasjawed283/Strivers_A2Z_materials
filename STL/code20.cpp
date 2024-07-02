//--------------------------------SET--------------------------------//
//----stores sorted and unique----//
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include <set>
using namespace std;

//SET is container. It stores everything in sorted order and stores unique.
// if a value is already in container then it will not take it again
//its not a linear container inside is a tree;



void printSet(set<int>& mySet) {
    std::cout << "Set elements: ";
    for (auto& i : mySet) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(){

    set<int>s;
    s.insert(33);//{33}
    s.emplace(35);//{33 35}
    s.insert(34);//{33,34,35}
    s.insert(33);//{33,34,35}
    s.insert(40);//{33,34,35,40}

    printSet(s);

    auto i =s.find(33); //returns an iterator which points to 33

    //auto i =s.find(100); // 100 is not there in the set then it will always return set.end() that means an iterator that points right after the end.

    s.erase(35);//deletes 35 and maintains the order

    int cnt =s.count(33);// if it exists then output 1 else 0;

//----------------------ERASE-------------------//

    //want to erase something in between of  two
    set<int>s2={1,2,3,4,5,6};
    auto j= s2.find(2);
    auto k= s2.find(4);
    s2.erase(j,k); //{1,4,5,6} {first, last}
    for (auto& i : s2) {
        std::cout << i << " ";
    }
    //lower bound and upperbound
    

}
// All thing happens in O(log(N))