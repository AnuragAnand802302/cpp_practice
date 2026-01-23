#include <bits/stdc++.h>
using namespace std;
int main () {
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<x;i++){
        cout << a[i]<<" ";
    }
    cout<<endl;
    int m,n;
    cin>>m>>n;
    int b[m][n],c[m][n],d[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            d[i][j]=b[i][j]+c[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}