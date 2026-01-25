#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    cout<<"Enter no. of terms of fibonacci series\n";
    cin>>d;
    a=0,b=1;
    for(int i=0;i<=d;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}