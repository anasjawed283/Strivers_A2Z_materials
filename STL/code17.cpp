//----------------STACK------------------//
#include<iostream>
#include<vector>
#include<stack>
#include<math.h>
using namespace std;

//STACK- LIFO - Last In First Out
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    std::cout << std::endl;
}

int main(){

    stack<int>st;
    st.push(1); //{1}
    st.push(3); //{3,1}
    st.push(5); //{5,3,1}
    st.push(7); //{7,5,3,1}
    st.push(9); //{9,7,5,3,1}
    st.emplace(11); //{11,9,7,5,3,1}

    printStack(st);
    
    cout<<st.top()<<endl; //11
    st.pop();
    cout<<st.top()<<endl; //9

    cout<<st.empty(); //False

    stack<int>st1, st2;
    st1.swap(st2);

    //all functions are time complexity of O(1)
}