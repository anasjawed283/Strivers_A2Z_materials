//--------------------MULTISET---------------//
//----sorted but NOT UNIQUE 
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include <set>
using namespace std;

// Multiset only obeys sorted not UNIQUE 
// multiple 1 are there {1, 1, 1 } but when we tell erase 1=> all 1s are erased

int main(){
    multiset<int>ms;
    ms.insert(2); //{2}
    ms.insert(2); //{2, 2}
    ms.insert(2); //{2, 2, 2}

    ms.erase(2); // all 2 are erased

    //if we want to delete 1 occurances or 2 occurances

    ms.erase(ms.find(2)); //instead of erasing element we erase the address 

    //ms.erase(ms.find(2), ms.find(2)+2);
}