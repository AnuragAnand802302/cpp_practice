#include <bits/stdc++.h>
using namespace std;
void fibonacci(int n){
    int a,b,c;
    a=0,b=1;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        c = a+b;
        a=b;
        b=c;
    }
}
int main() {
    int d;
    cout<<"Enter no. of terms of fibonacci series\n";
    cin>>d;
    fibonacci(d);
    return 0;
}