#include <bits/stdc++.h>
using namespace std;
class dummy1{
    string name;
    int roll;
    public:
    dummy1(string n, int r): name(n), roll(r){}
    friend class dummy2;
};
class dummy2{
    public:
    void showdetail(const dummy1 &obj){
        cout<<"given objects name is "<<obj.name<<" and roll no is "<<obj.roll<<"\n";
    }
};
int main() {
    dummy1 d1("Anuj Kumar", 23), d2("Anup Pratap", 42);
    dummy2 d10;
    d10.showdetail(d1);
    d10.showdetail(d2);
}