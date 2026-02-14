#include <bits/stdc++.h>
using namespace std;
class dummy{
    string name;
    int roll_no;
    public:
    dummy(string n, int r) : name(n), roll_no(r){}
    dummy(const dummy &obj){
        name=obj.name;
        roll_no=obj.roll_no;
    }
    dummy(const dummy &obj, int x){
        name=obj.name;
        roll_no=x;
    }
    void showdetail(){
        cout<<"given student's name is "<<name<<" and roll no is "<<roll_no<<"\n";
    }
};
int main() {
    dummy s1("Harpreet Singh", 12);
    dummy s2 = s1;
    s2.showdetail();
    dummy s3(s2, 13);
    s3.showdetail();
    return 0;
}