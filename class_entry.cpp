#include <bits/stdc++.h>
using namespace std;
class Student{
    string Name;
    int Adm_no;
    int Contact;
    string Branch;
    public:
    Student(string n, string b){
        this->Name=n;
        this->Branch=b;
    }
    void assign_adm_no(int adm_no){
        this->Adm_no=adm_no;
    }
    void assign_contact(int contact){
        this->Contact=contact;
    }
    string getname(){
        return Name;
    }
    string getbranch(){
        return Branch;
    }
};
int main() {
    int n;
    cout<<"enter the cuurent no. of friends \n";
    cin>>n;
    string Friends[n],branch[n];
    for(int i=0;i<n;i++){
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, Friends[i]);
        cin>>branch[i];
    }
    cout<<"My Friend List \n";
    for(int i=0;i<n;i++){
        string n=Friends[i];
        string B=branch[i];
        Student N(n, B);
        cout<<N.getname()<<" "<<N.getbranch()<<endl;
    }
    return 0;
}