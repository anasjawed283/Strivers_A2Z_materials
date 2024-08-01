//just one line can change the whole order :
// IMP

#include<iostream>
using namespace std;

//for n to 1 :
void n_to_one(int n) {
    if (n == 1) {
        cout << n << ' ';
        return;
    }
    cout << n << ' ';
    n_to_one(n - 1);
}

//for 1 to n:
void one_to_n(int n) {
    if (n == 1) {
        cout << n << ' ';
        return;
    }
    one_to_n(n - 1);
    cout << n << ' ';
}

int main(){
    int n = 10;

    n_to_one(n);

    cout<<endl;

    one_to_n(n);

}