#include <bits/stdc++.h>
using namespace std;
class dummy{
    int salary;
    string employee;
    public:
    dummy(string n,int s): employee(n), salary(s){}
    dummy operator+(const dummy &obj){
        return dummy(employee, salary+obj.salary);
    }
    dummy operator+(int x){
        return dummy(employee, salary+x);
    }
    string getname(){
        return employee;
    }
    int getsalary(){
        return salary;
    }
};
int main() {
    dummy e1("Harpreet Singh", 40000), e2("Manpreet Singh", 45000);
    dummy e3= e1+e2;
    dummy e4=e2+10000;
    vector<dummy> employees = {e1, e2, e3, e4};
    cout<<"Below is the employee name and their salary\n";
    for(auto &e:employees){
        cout<<e.getname()<<" has salary of "<<e.getsalary()<<'\n';
    }
    return 0;
}