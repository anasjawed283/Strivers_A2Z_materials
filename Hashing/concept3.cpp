//CHARACTER HASHING

#include<iostream>
using namespace std;
//ASCII VALUE - https://www.w3schools.com/charsets/ref_html_ascii.asp

/*

character - a you get corresponding hash value

*/
int main(){
    string s;
    cin>> s;
//take 256 as size if not specified as it covers all the characters.
    int hash[26] = {0};
    for(int i = 0;i<s.size(); i++){
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
}