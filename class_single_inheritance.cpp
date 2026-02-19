#include <bits/stdc++.h>
using namespace std;
class dummy1{
    protected:
    string name;
    int roll;
    public:
    dummy1(string n, int r): name(n), roll(r){}
    string getname() const{
        return name;
    }
    int getroll() const{
        return roll;
    }
};
class dummy2: public dummy1{
    public:
    dummy2(string s, int n): dummy1(s,n){}
    void showdetail(const dummy1 &obj){
        cout<<"given objects name is "<<obj.getname()<<" and roll no is "<<obj.getroll()<<"\n";
    }
};
int main() {
    dummy1 d1("Anuj Kumar", 23), d2("Anup Pratap", 42);
    dummy2 d10("dummy", 2);
    d10.showdetail(d1);
    d10.showdetail(d2);
}