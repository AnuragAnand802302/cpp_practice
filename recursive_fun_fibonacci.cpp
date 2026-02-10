#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}
int main() {
    int d;
    cout<<"Enter no. of terms of fibonacci series\n";
    cin>>d;
    for(int i=0;i<d;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}