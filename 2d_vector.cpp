#include <bits/stdc++.h>
using namespace std;
int main(){
    int c,r;
    cin>>r;
    vector<vector<int>> A(r);
    for(int i=0;i<r;i++){
        cin>>c;
        for(int j=0;j<c;j++){
            int t;
            cin>>t;
            A[i].push_back(t);
        }
    }
    for(auto m:A){
        for(int n:m){
            cout<<n<<" ";
        }
        cout<<endl;
    }
    return 0;
}