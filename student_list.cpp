#include <bits/stdc++.h>
using namespace std;
class Student {
    string Name;
    int Roll_no;
    public:
    void setdata(string n, int r){
        this->Name=n;
        this->Roll_no=r;
    }
    string showname(){
        return Name;
    }
    int showroll_no(){
        return Roll_no;
    }
};
int main() {
    Student s1,s2;
    s1.setdata("Arpita Kumari", 23);
    s2.setdata("Ayush Kumar", 42);
    cout<<s1.showname()<<"'s roll no. is "<<s1.showroll_no()<<"\n";
    cout<<s2.showname()<<"'s roll no. is "<<s2.showroll_no()<<"\n";
    return 0;
}