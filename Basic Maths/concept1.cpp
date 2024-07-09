// CONCEPT-------------------------

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

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//------To seperate and print digits------//
vector<int> return_digits(int n)
{
    vector<int> vec;
    int num = n;
    while (num > 0)
    {
        int digit;
        digit = num % 10;
        num = num / 10;
        vec.push_back(digit);
    }
    reverse(vec.begin(), vec.end()); // To maintain the original order of digits ( originally stored in reversed order )
    return vec;
}

//-----To count total digits-----//
int countofdigits(int n)
{
    int num = n;
    int counter = 0;
    while (num > 0)
    {
        num = num / 10;
        counter++;
    }
    return counter;
}

int main()
{
    int n = 7789;

    vector<int> result = return_digits(n);
    for (int i : result)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << "Total digits are " << countofdigits(n);
    return 0;
}

// ---------------------Time complexity Analysis--------------------- //
/*
---------------------Function 1: return_digits---------------------


Time Complexity Analysis:
While Loop:

The loop runs as long as num is greater than 0.
In each iteration, num is divided by 10.
The number of iterations is equal to the number of digits in n, which is O(d), where d is the number of digits.
Push Back Operation:

Each push_back operation inside the loop runs in amortized O(1) time.
Reverse Operation:

reverse(vec.begin(), vec.end()) runs in O(d) time since it traverses the entire vector to reverse it.
Combining these, the overall time complexity of return_digits is O(d) + O(d) = O(d), where d is the number of digits in n.



---------------------Function 2: countofdigits---------------------

Time Complexity Analysis:
While Loop:
Similar to the previous function, the loop runs as long as num is greater than 0.
In each iteration, num is divided by 10.
The number of iterations is equal to the number of digits in n, which is O(d), where d is the number of digits.
The overall time complexity of countofdigits is O(d), where d is the number of digits in n.

Summary
return_digits: O(d)
countofdigits: O(d)
In both functions, d is the number of digits in the input integer n.







-----------------------------HOT POINT---------------------------


The functions return_digits and countofdigits can be described with a time complexity of O(log n), given that d (the number of digits) is proportional to log10(n).

Time Complexity Perspective

1. Number of Digits (d) in a Number (n):
- The number of digits d in a number n is given by d = floor(log10(n)) + 1.
- Thus, the time complexity O(d) can be expressed as O(log10(n)).

So, the original time complexities O(d) can be translated to O(log10(n)).
This means the existing implementations are already optimal in terms of logarithmic time complexity when expressed with respect to the size of the input number n.



Revisiting Functions

Function: return_digits

The original implementation:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> return_digits(int n) {
    vector<int> vec;
    int num = n;
    while (num > 0) {
        int digit = num % 10;
        num = num / 10;
        vec.push_back(digit);
    }
    reverse(vec.begin(), vec.end()); // To maintain the original order of digits
    return vec;
}


This function is already O(log10(n)) because it processes each digit of the number.

Function: countofdigits

The original implementation:

int countofdigits(int n) {
    int num = n;
    int counter = 0;
    while (num > 0) {
        num = num / 10;
        counter++;
    }
    return counter;
}


This function is also O(log10(n)) because it counts each digit by repeatedly dividing the number by 10.

Conclusion

Both functions are already optimal and operate in O(log10(n)) time complexity, which is equivalent to O(d) where d is the number of digits in n.
The current implementations are as efficient as possible given the nature of the problem.
There is no further optimization needed or possible to reduce the time complexity below O(log10(n)) for these operations.
*/
