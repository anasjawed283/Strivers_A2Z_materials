//CAPACITY and SIZE

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    for(int x=1;x<=10;x++){
        v.push_back(x);
    }
    std::cout<<"Vector size is: "<<v.size()<<std::endl;
    std::cout<<"Capacity of vector is: "<<v.capacity()<<std::endl;
    std::cout<<"Maximum size of vector is: "<<v.max_size()<<std::endl;

    v.resize(5);
    std::cout<<"Vector size after resizing is :"<<v.size()<<std::endl;

    if(v.empty()==false){
        std::cout<<"Vector is not empty"<<std::endl;
    }
    else{
        std::cout<<"Vector is empty"<<std::endl;
    }
}