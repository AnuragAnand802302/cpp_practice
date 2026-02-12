#include <bits/stdc++.h>
using namespace std;
void passing0(int* a,int s){    // size of array unknown
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}
void passing1(int a[], int s){      // size of array unknown, compiler sees "int a[]" as "int* a"
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}
void passing2(int a[5]){        // size of array known i.e, 5 and compiler still sees "int a[]" as "int* a"
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
void passing3(int (&a)[5]){       // size of array known i.e,5 and array reference is used
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int s;
    cin>>s;
    int a[s],b[5]={1,2,3,4,5};
    for(int i=0;i < s;i++){
        cin>>a[i];
    }
    cout<<"passing an array with pointer \n";
    passing0(a,s);
    cout<<"\npassing an array without pointer and of unknown size \n";
    passing1(a,s);
    cout<<"\npassing an array without pointer and of known size \n";
    passing2(b);
    cout<<"\npassing an array as a reference and of known size \n";
    passing3(b);
    return 0;
}