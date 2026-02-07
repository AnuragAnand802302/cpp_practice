#include <bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin>>s;
    vector<int> a(s);
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"unsorted array "<<endl;
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"sorted array in increasing order "<<endl;
    sort(a.begin(),a.end());
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"sorted array in decreasing order "<<endl;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}  