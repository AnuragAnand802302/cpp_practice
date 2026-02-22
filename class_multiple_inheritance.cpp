#include <bits/stdc++.h>
using namespace std;
class parent1{
    int x;
    public:
    int getroll(){
        return x;
    }
    void setdetail(int y){
        x=y;
    }
};
class parent2{
    int x;
    public:
    int getroll(){
        return x;
    }
    void setdetail(int z){
        x=z;
    }
};
class child: public parent1, public parent2{
    int x;
    public:
    int getroll(){
        return x;
    }
    void showdetail(){
        cout<<" parent1 attribute is "<<parent1::getroll()<<" parent2 attribute is "<<parent2::getroll()<<"\n child attribute is "<<child::getroll()<<'\n';
    }
    void setdetail(int x, int y, int z){
        this->child::x=x;
        parent1::setdetail(y);
        parent2::setdetail(z);
    }
};
int main() {
    child c1, c2;
    c1.setdetail(12,14,16);
    c2.setdetail(10, 18, 15);
    c1.showdetail();
    c2.showdetail();
    return 0;
}