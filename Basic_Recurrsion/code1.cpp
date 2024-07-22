/*

What is recurrsion?

When a function calls itself until a specified condition is met.

void function(){
    print (1);
    function();
}

int main(){
    function();
}
*/

#include <iostream>
using namespace std;

void function(int n){
    cout<<n<<" ";
    function(n);
}

int main(){
    int n =1;
    function(n);
}

//This code will keep on running until memory is flow

// It will automatically stop after 5 to 10 lakh executions - This is called stack overflow (segmentation error)

/*

                        cout(n)
main  ->  function(n) _/             cout(n)
                       \function(n)_/
                                    \function(n)

*/

/*

There must be a condition to stop this -  base condition

*/