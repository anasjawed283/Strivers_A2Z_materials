//--------------------DEQUEUE---------------//

#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
#include<string>
#include<deque>
using namespace std;

void explain(){

    deque<int> d;
    d.push_back(1);       // {1}
    d.emplace_back(2);    // {1 2}
    d.push_front(4);      // {4 1 2}
    d.emplace_front(3);   // {3 4 1 2}
    d.pop_back();         // {3 4 1}
    d.pop_front();        // {4 1}

// rest all functions are same as vectors front end back//

}