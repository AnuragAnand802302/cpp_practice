// It is a question based on the closing of parenthesis of string of parenthesis.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<<"enter the string of parenthesis\n";
    getline(cin, str);
    stack<char> s;
    int n = str.size();
    for(int i=0;i<n;i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        }
        else{
            if(s.empty()){
                cout<<"the given string has no correct closing of parenthesis\n";
                break;
            }
            char c = s.top();
            s.pop();
            if((c == '{' && str[i] == '}') || (c == '[' && str[i] == ']') || (c == '(' && str[i] == ')')){
                // this condition is for the checking of closing of parenthesis.
            }
            else{
                cout<<"the given string has no correct closing of parenthesis\n";
                break;
            }
        }
    }
    if(!(s.empty())){
        cout<<"the string has unclosed parenthesis\n";
    }
    return 0;
}