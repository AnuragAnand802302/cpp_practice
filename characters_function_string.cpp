#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int C=0,sm=0,n=0,sp=0,space=0;
    cout<<"enter the string to be checked\n";
    getline(cin, str);
    for(char x : str){
        if(isupper(x)){
            C++;
        }
        else if(islower(x)){
            sm++;
        }
        else if(isdigit(x)){
            n++;
        }
        else if(isspace(x)){
            space++;
        }
        else{
            sp++;
        }
    }
    cout<<"no. of capital letters in the given string is -> "<<C<<"\n";
    cout<<"no. of small letters in the given string is -> "<<sm<<"\n";
    cout<<"no. of integer in the given string is -> "<<n<<"\n";
    cout<<"no. of space in the given string is -> "<<space<<"\n";
    cout<<"no. of special Characters in the given string is -> "<<sp<<"\n";
    return 0;
}