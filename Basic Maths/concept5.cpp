/*

PRINT ALL DIVISIORS - normal method

*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int> print_divisors(int n){
    int num = n;
    vector<int> result;
    for(int i=1; i<=(n/2);i++){
        if(n % i == 0){
            result.push_back(i);
        }
    }
    result.push_back(n);
    return result;
}

int main(){
    int n = 13;
    vector<int> result = print_divisors(n);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;

}