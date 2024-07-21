/*

PRINT ALL DIVISIORS - THE SQUARE ROOT METHOD
16
1 X 16
2 X 8
4 X 4
---------------------- above this line we get all divisors why go further. This is the Square root
8 X 2
16 X 1

*/

#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

vector<int> printdivisors(int n){

    int num = n;
    vector<int> result;
    for(int i=1; i<= sqrt(n); i++){
        if(n % i == 0){
            result.push_back(i);
            int digit;
            digit = n/i;
            if(digit != i){
                result.push_back(digit);
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}
int main(){
    int n = 16;
    vector<int> result = printdivisors(n);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;

}