//--------KEEP TAKIN INPUT UNTL 0 IS ENTERED--------//
#include<iostream>
#include<vector>
using namespace std;

void Function(){
    vector<int> vec;
    int condition;
    do{
        int num;
        cin>>num;
        vec.push_back(num);
        condition = num;
    }
    while(condition!=0);

    cout<<"The size of the vector is currently :"<<vec.size()<<endl;
}

int main(){
    Function();
}