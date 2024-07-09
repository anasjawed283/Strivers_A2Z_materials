//CONCEPT-------------------------

/*

EXTRACTION OF DIGITS INDIVIDUALLY

N= 7787
OUTPUT= 7, 7, 8, 9

Digits can be obtained by doing modulo % -- It gives remainder that is always the last digit
7789 % 10 = 9 (REMAINDER)

// Now the last digit should be changed in original number

Do division as it givies quotient and taking it as integer-

7789 / 10 = 778
778 % 10 = 8;

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> function(int n){
    vector<int> vec;
    int num = n;
    while(num>0){
        int digit;
        digit = num % 10;
        num = num/10;
        vec.push_back(digit);
    }
    reverse(vec.begin(), vec.end()); // To maintain the original order of digits ( originally stored in reversed order )
    return vec;
}

int main() {
    int n = 7789;
    vector<int> result = function(n);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}