#include <bits/stdc++.h>
using namespace std;
class Student{
    static int next_id;
    int student_id;
    int Roll_no;
    string Name;
    public:
    Student(string n, int r): Name(n) , Roll_no(r){
        student_id=next_id++;
    }
    friend void show_detail(const Student &);
};
void show_detail(const Student &obj){
    cout<<"id no. "<<obj.student_id<<" student's name is "<<obj.Name<<" and roll no. is "<<obj.Roll_no<<"\n";
}
int Student::next_id = 1;
int main() {
    vector <Student> Register_book;
    int num,temp_roll_no;
    string temp_name;
    cout<<"Enter no. of student\n";
    cin>>num;
    cout<<"enter student rollno. and name in series\n";
    for(int i=0;i<num;i++){
        cin>>temp_roll_no;
        cin.ignore();
        getline(cin, temp_name);
        Register_book.emplace_back(temp_name, temp_roll_no);
    }
    for(auto &s : Register_book){
        show_detail(s);
    }
    return 0;
}