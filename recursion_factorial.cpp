#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main() {
    int n,f;
    cin>>n;
    f=factorial(n);
    cout<<f;
    return 0;
}