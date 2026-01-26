#include <bits/stdc++.h>
using namespace std;
int main(){
    array<int,5> a;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"unsorted array "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"sorted array in increasing order "<<endl;
    sort(a.begin(),a.end());
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"sorted array in decreasing order "<<endl;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}