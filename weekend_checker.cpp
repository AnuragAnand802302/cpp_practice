#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the day ";
    cin>>n;
    if (n==1)
    { cout<<"today is sunday";}
    else if (n==2)
    { cout<<"today is monday";}
    else if (n==3)
    { cout<<"today is tuesday";}
    else if (n==4)
    { cout<<"today is wednesday";}
    else if (n==5)
    { cout<<"today is thursday";}
    else if (n==6)
    { cout<<"today is friday";}
    else if (n==7)
    { cout<<"today is saturday";}
    else {
        cout<<"invalid output";
    }
    return 0;
}