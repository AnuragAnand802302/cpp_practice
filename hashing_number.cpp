// hashing numbers between 0 to 10000
#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n,H[10000] = {0};
        cout<<"enter the size and elements of the array (0-9999)\n";
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
            H[A[i]] += 1;
        }
        while(true){
            cout<<"enter the element to be searched in the array and to find its frequency\n";
            int a;
            cin>>a;
            if(H[a]){
                cout<<"element is present in the list and it's frequency is : "<<H[a]<<endl;
            }
            else{
                cout<<"element is not present in the array\n";
            }
            cout<<"do you want to search again, if no type 0\n";
            cin>>a;
            if(a){}
            else{
                break;
            }
        }
        int x;
        cout<<"do you want to re-enter the elements of the array? if no type 0\n";
        cin>>x;
        if(x){}
        else{
            break;
        }
    }
    return 0;
}