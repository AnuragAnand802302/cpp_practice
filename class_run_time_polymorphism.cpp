#include <bits/stdc++.h>
using namespace std;
class parent{
    int x;
    public:
    parent(int n): x(n) {}
    int showdetail(){
        return x;
    }
    virtual void showdetail1(){}
};
class child: public parent{
    int x;
    public:
    child(int m): x(m), parent(m*2){}
    int showdetail(){
        return x;
    }
    void showdetail1(){
        cout<<x;
    }
};
int main(){
    child c2(25);
    cout<<"child class member function overrides parent class function\n";
    cout<<c2.showdetail();
    parent* ptr;
    ptr= &c2;
    cout<<"\nparent pointer points to parent attribute of child object hence outputs parent member function\n";
    cout<<ptr->showdetail();
    cout<<"\nvirtual function allows whether pointer or normal member function with same name to override the parent function\n";
    c2.showdetail1();
    cout<<'\n';
    ptr->showdetail1();
}