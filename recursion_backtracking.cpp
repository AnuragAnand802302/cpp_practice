#include <bits/stdc++.h>
using namespace std;
void printcount(int i, int n){
    if(i>n){
        return;
    }
    // cout<<i;
    printcount(i+1,n);
    cout<<i;
}

int main(){
    int n;
    cin>>n;
    printcount(0,n);
    return 0;
}