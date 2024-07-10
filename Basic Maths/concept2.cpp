//------REVERSE A NUMBER--------//
/*
Explaination
*/
#include<iostream>
using namespace std;

int reverse_a_number(int n){
    int num = n;
    int revnum=0;
    while(num>0){
        int digit;
        digit = num % 10;
        revnum = revnum*10 + digit;
        num=num/10;
    }
    return revnum;

}
int main(){
    int n =1234;
    cout<<reverse_a_number(n);
}

/*

Time Complexity Analysis
While Loop:

The loop continues until num becomes 0.
In each iteration, num is divided by 10.
The number of iterations of the loop is equal to the number of digits d in the number n.
Operations Inside the Loop:

Extracting the last digit (num % 10) is O(1).
Appending the digit to revnum (revnum = revnum * 10 + digit) is O(1).
Dividing num by 10 (num = num / 10) is O(1).
Since each iteration of the loop performs a constant amount of work, the time complexity is determined by the number of iterations of the loop.

Number of Iterations
The number of iterations of the while loop is equal to the number of digits d in n. The number of digits d in a number n is given by d = floor(log10(n)) + 1. Therefore, the time complexity is proportional to the number of digits in n.

Time Complexity
The overall time complexity of the reverse_a_number function is: 𝑂(𝑑)
O(d) where d is the number of digits in n.

In terms of n, since d = O(\log_{10}(n)), the time complexity can also be expressed as:𝑂(log10(𝑛))
O(log 10(n))
Thus, the time complexity of the reverse_a_number function is 𝑂(log10(𝑛)).

*/