#include <bits/stdc++.h>
using namespace std;
class dummy{
    int size;
    int* data;
    public:
    dummy(int s){
        size=s;
        data=new int(size);
    }
    void setvalue(int idx, int value){
        if(idx>=0 && idx<size){
            data[idx] = value;
        }
    }
    int getvalue(int idx){
        if(idx>=0 && idx<size){
            return data[idx];
        }
        return -1;
    }
    ~dummy(){
        delete[] data;
    }
};
int main() {
    int s, temp_value;
    cout<<"enter the size of dynamic array\n";
    cin>>s;
    dummy a1(s);
    cout<<"enter the elements of array in order\n";
    for(int i=0;i<s;i++){
        cin>>temp_value;
        a1.setvalue(i,temp_value);
    }
    cout<<"below is the array which is dynamically allocated\n";
    cout<<"[ ";
    for(int i=0;i<s;i++){
        cout<<a1.getvalue(i);
        if(i>=0 && i<s-1){
            cout<<" , ";
        }
        else{
            cout<<" ] ";
        }
    }
    return 0;
}
