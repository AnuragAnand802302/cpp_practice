#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the size and elements of array\n";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = a[0];
    for(int i =1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    vector<int> b(max+1);
    for(int i=0; i<n;i++){
        b[a[i]] += 1;
    }
    for(int i = 1;i<b.size();i++){
        b[i]=b[i]+b[i-1];
    }
    vector<int> c(n);
    for(int i = n-1;i>=0;i--){
        c[b[a[i]]-1] = a[i];
        b[a[i]] -= 1;
    }
    cout<<"sorted array is\n";
    for(int i=0;i<n;i++){
        cout<<c[i]<<' ';
    }
    return 0;
}