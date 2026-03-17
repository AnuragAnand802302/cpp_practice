#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"unsorted array:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"sorted array:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}