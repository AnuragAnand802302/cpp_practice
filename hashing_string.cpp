// string hashing and compression;
#include <bits/stdc++.h>
using namespace std;
int main() {
    while(true){
        string str,cstr;
        cout<<"enter the string to find its compression in sorted form\n";
        getline(cin, str);
        int h[256] = {0};
        if (str.empty()) {
            cout << "Empty string entered.\n";
            continue;
        }
        sort(str.begin(), str.end());
        for(char s : str){
            h[s] += 1;
        }
        char c = str[0];
        for(char s:str){
            if(c != s){
                cstr += c;
                cstr += to_string(h[c]); 
            }
            c = s;
        }
        cstr += c;
        cstr += to_string(h[c]);
        cout<<"sorted string is : "<<str<<endl;
        cout<<"compressed string is : "<<cstr<<endl;
        int a;
        cout<<"do you want to try a different string?(yes->1 & no->0)\n";
        cin>>a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if(a==0){
            break;
        }
    }
    return 0;
}