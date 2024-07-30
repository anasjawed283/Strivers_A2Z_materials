//BAsic recurrsion
//Print in reverse order

#include<iostream>
using namespace std;

void function(int i, int n) {
    if (n < i) {
        return;
    }
    cout << n << endl;
    function(i, n - 1);
}

int main() {
    int n = 10;
    int i = 0;
    function(i, n);
    return 0;
}
