/*
GCD - GREATEST COMMON FACTOR

// general explainatory method - non optimized
*/

#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int GCD(int n, int m){
    vector<int> vec1;
    vector<int> vec2;
    int n1 =n;
    int m1 =m;

    for(int i=1;i<=(n1/2);i++){
        if(n1%i==0){
            vec1.push_back(i);
        }
    }
    vec1.push_back(n);

    for(int i=1;i<=(m1/2);i++){
        if(m1%i==0){
            vec2.push_back(i);
        }
    }
    vec2.push_back(m);

    vector<int> common;
    for(int i=0;i<vec1.size();i++){
        for(int j=0;j<vec2.size();j++){
            if(vec1[i]==vec2[j]){
                common.push_back(vec1[i]);
            }
        }
    }
    //int result = max(common.begin(),common.end());
    int result = *max_element(common.begin(), common.end());
    return result;
}
int main()
{
    int n, m;
    cin>>n>>m;
    int result = GCD(n,m);
    cout<<result;
    return 0;
}