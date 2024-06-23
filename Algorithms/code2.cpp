#include <iostream>
#include<vector>
#include<math.h>
#include<string>
#include <set>
#include <algorithm>
using namespace std;
//this function may not be available with all compilers therefore on more thing is available
// int count = std::bitset<32>(num).count();


int main() {
    int num = 25; // Example integer

    // Use __builtin_popcount() to count the number of set bits //count number of set bits .. total 32 bits 3 1's are occuring
    int count = __builtin_popcount(num);

    cout << "Number of set bits in " << num << ": " << count << std::endl;

    

    //if we are using popcount with different datatypes its synatax changes
    long long num2 = 1989823456788;
    int count2 = __builtin_popcountll(num2);
    cout << "Number of set bits in " << num2 << ": " << count2 << std::endl;
    

    //next permutation
    string s ="123";
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));

    //important catch is that it print permutation in dictionary order
    //123-132-213-231-312-321
    //but what if s is 231 ==> 231-312-321 and now it stop
    // if you want to print all permutation then start from the sorted guy

    //int maxi = *max_element(a, a+n); // finds max element between the 2 range if we dont give * then it gives address
    return 0;
}
