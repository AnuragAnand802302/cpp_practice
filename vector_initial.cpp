#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> n;
    int x;
    for(int i=1; i<=100; i++)
    {
        cin>>x;
        if(x==0)
        {break;}
        else
        {n.push_back(x);}
    }
    for(int j=0; j<n.size(); j++)
    {
        cout<<n[j]<<" ";
    }
    cout<<endl;
    n.pop_back();
    for(int j=0; j<n.size(); j++)
    {
        cout<<n[j]<<" ";
    }
    return 0;

}