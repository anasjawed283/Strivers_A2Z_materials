// Base Condition

#include<iostream>
using namespace std;
int counter = 0;
void function(){
    if(counter == 4){    // This is what is called base condition
        return;  // as it satisfies this condition it stops.
    }
    cout<<counter<<endl;
    counter++;
    function();
}
int main(){
    function();
}


/*

What is recurrsion tree ?

                                main
                                 |
                              function
                             /        \
                          function
                          /
                    function
                      /  \
                function  \
                   /       2
                  3
*/