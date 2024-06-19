/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<< " ";
        }
        for(int k=0;k<=(n-i);k++)
        {
            cout<<"*";
        }
        for(int m=1;m<=(n-i);m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<< " ";
        }
        for(int k=0;k<(n-i);k++)
        {
            cout<<"*";
        }
        for(int m=1;m<(n-i);m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}