//CHECK PALINDROME
// a string on reversal is same

#include<iostream>
using namespace std;

bool function(int i, string &s){
    if(i >= s.size()/2){
        return true;
    }
    if(s[i] != s[s.size() -i-1]){
        return false;
    }
    return function(i+1, s);
}

int main(){
    string s = "madam";
    cout<<function(0,s);
    return 0;

}