//Basic recurrsion problems//
//Print name n times

#include<iostream>
using namespace std;
int i = 0;

//Type 1 - using global variables
void function(int n, string name){
    if(i<n){
        cout<<name<<endl;
        i++;
        function(n,name);
    }
    else{
        return;
    }
    
}

//Type2 - without global variables
void function2(int j, int n, string name) {
    if (j >= n) {
        return;
    } else {
        cout << name << endl;
        function2(j + 1, n, name);
    }
}
// Time Complexity - O(n)
// Space Complexity - stack space O(n)


int main() {
    string name = "Anas";
    int n = 5;
    int j = 0;
    
    function(n, name);

    cout<<endl;

    i = 0; // Resetting global variable for clarity in output
    function2(j, n, name);

    return 0;
}