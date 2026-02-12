#include <bits/stdc++.h>
using namespace std;
int main() {
    string str,reverse;
    cout<<"Enter the string to be reversed \n";
    getline(cin, str);
    int n = str.size();
    reverse.reserve(n);
    for(int i=n-1;i>=0;i--){
        reverse += str[i];
    }
    cout<<"reversed string is \n"<<reverse;
    return 0;
}