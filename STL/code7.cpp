//ITERATIVE FUNCTION-----ITERATING IN LOOP FOREWARD AND BACKWARD
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<int>num;
    for(int i=0;i<=5;i++){
        num.push_back(i);
    }

    //-------FORWARD DIRECTION-------//
    std::cout<<"Output from the beignning to the end: ";
    for(auto a=num.begin();a!=num.end();a++){
        std::cout<<*a<<" ";
    }
    cout<<endl;

    //-------BACKWARD DIRECTION-------//
    std::cout<<"Output from the end to the beignning: ";
    for(auto a=num.rbegin();a!=num.rend();a++){
        std::cout<<*a<<" ";
    }
}