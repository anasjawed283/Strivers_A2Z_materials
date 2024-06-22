/*

   A
  ABA
 ABCBA
ABCDCBA

*/

#include <iostream>
using namespace std;

void function(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print increasing part of the pattern
        for (int k = 0; k <= i; k++)
        {
            cout << char(65 + k);
        }

        // Print decreasing part of the pattern
        for (int k = i - 1; k >= 0; k--)
        {
            cout << char(65 + k);
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    function(n);
    return 0;
}
