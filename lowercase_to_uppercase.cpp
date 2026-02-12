#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<<"Enter the string to be converted \n";
    getline(cin, str);
    int n= str.size();
    for(int i=0;i<n;i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);       // tolower(str[i]) can be used to convert uppercase to lowercase.
        }
    }
    cout<<"converted string is \n"<<str;
    return 0;
}