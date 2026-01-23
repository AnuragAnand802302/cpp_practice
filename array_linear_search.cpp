#include <bits/stdc++.h>
using namespace std;
int main(){
    int size,i,num,flag,j;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element which you want to find"<<endl;
    cin>>num;
    for(i=0;i<size;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            j=i+1;
        }
    }
    if(flag==1)
    {
        cout<<"element is found at "<<j<<"th location";
    }
    else{
        cout<<"element is not found. ";
    }
    return 0;
}