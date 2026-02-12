#include <bits/stdc++.h>
using namespace std;
int main() {
    string subs,str;
    cout<<"enter the string to be compressed \n";
    getline(cin, str);
    sort(str.begin(), str.end());
    int c=0;
    char y=str[0];
    for(char x : str){
        if(y != x){
            subs += y+to_string(c);
            c=0;
            y=x;
        }
        c++;
    }
    subs += y+to_string(c);
    cout<<"compressed string is\n"<<subs;
    return 0;
}