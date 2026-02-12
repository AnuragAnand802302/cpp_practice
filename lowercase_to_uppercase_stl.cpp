#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<<"Enter the string to be converted \n";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<"Transformed to uppercase string \n"<<str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<"\nTransformed to lowercase string \n"<<str;
    // safer approach
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return toupper(c);
    });
    cout<<"\nTransformed to uppercase string \n"<<str;
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){
        return tolower(c);
    });
    cout<<"\nTransformed to lowercase string \n"<<str;
    return 0;
}