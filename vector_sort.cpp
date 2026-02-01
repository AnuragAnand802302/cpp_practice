#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int x;
    for(int i=0;i<100;i++){
        cin>>x;
        if(x==0){
            break;
        }
        else{
            a.push_back(x);
        }
    }
    int s= a.size();
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