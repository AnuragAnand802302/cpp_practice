#include <bits/stdc++.h>
using namespace std;
int main() {
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"Original Array is "<<endl;
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    reverse(a,a+s);
    cout<<endl<<"reversed array is "<<endl;
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}