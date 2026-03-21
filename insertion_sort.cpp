#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.emplace_back(val);
    }
    for(int i=1;i<n;i++){
        int temp = a[i];
        int ptr = i-1;
        while(ptr>=0 && temp<a[ptr]){
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }
    for(int i=0; i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;

}