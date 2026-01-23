#include <bits/stdc++.h>
using namespace std;
int main() {
    int s;
    cout<<"enter the size of array"<<endl;
    cin>>s;
    int a[s];
    cout<<"enter array element "<<endl;
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    sort(a , a+s);
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    int x;
    cout<<"enter the element to be searched "<<endl;
    cin>>x;
    int high=s-1;
    for(int low=0;low<=high;){
        int mid= low+ (high-low)/2;
        if(a[mid]==x){
            cout<<"element found at "<<mid+1<<"th location";
            break;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}