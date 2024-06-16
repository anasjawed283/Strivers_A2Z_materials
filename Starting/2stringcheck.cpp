#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;

    int len = str.size();
    cout<<len<<endl;

    str[len -1]='z';
    //getline(cin ,s);


    cout<<str;
}