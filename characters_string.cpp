#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int C=0,sm=0,n=0,sp=0;
    cout<<"enter the string to be checked\n";
    getline(cin, str);
    for(char x : str){
        if(x>='A' && x<='Z'){
            C++;
        }
        else if(x>='a' && x<='z'){
            sm++;
        }
        else if(x>='0' && x<='9'){
            n++;
        }
        else{
            sp++;
        }
    }
    cout<<"no. of capital letters in the given string is -> "<<C<<"\n";
    cout<<"no. of small letters in the given string is -> "<<sm<<"\n";
    cout<<"no. of integer in the given string is -> "<<n<<"\n";
    cout<<"no. of special Characters in the given string is -> "<<sp<<"\n";
    return 0;
}