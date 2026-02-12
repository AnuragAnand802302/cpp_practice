#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<<"Enter the string to be checked \n";
    getline(cin, str);
    int c=0,n = str.size();
    for(int i=0; i<=n/2; i++){
        if(tolower(str[i]) != tolower(str[n-i-1])){
            c++;
            break;
        }
    }
    if(c != 0){
        cout<<"Given string is not pallindrome\n";
    }
    else{
        cout<<"Given string is Pallindrome\n";
    }
    return 0;
}