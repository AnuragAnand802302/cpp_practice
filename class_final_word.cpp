#include <bits/stdc++.h>
using namespace std;
class dummy final{
    string Label, Name;
    int Roll_no;
    public:
    dummy(string l, string n, int r): Label(l), Name(n), Roll_no(r){}
    string getname(){
        return Name;
    }
    string getlabel(){
        return Label;
    }
    int getroll(){
        return Roll_no;
    }

};
int main() {
    int n,temp_roll;
    string temp_label,temp_name;
    cout<<"enter the no. of people in the list of dummy people\n";
    cin>>n;
    vector <dummy> people;
    cout<<"enter nickname, name and roll no in order for each person below\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=0;i<n;i++){
        getline(cin, temp_label);
        getline(cin, temp_name);
        cin>>temp_roll;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        people.emplace_back(temp_label, temp_name,temp_roll);
    }
    cout<<"do you want to find detail based on nickname, if yes enter '1'and enter '2' if no\n";
    int consent;
    cin>>consent;
    if(consent==1){
        while(true){
            bool found = false;
            cout<<"enter the nickname\n";
            string str;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, str);
            for(auto &s: people){
                if(s.getlabel()==str){
                    cout<<str<<" is the nickname of "<<s.getname()<<" whose roll no is "<<s.getroll()<<"\n";
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"given nick_name doesn't exist in record\n";
            }
            cout<<"do you want to find detail based on nickname again, if yes enter '1'and enter '2' if no\n";
            int cont=0;
            cin>>cont;
            if(cont==2){
                break;
            }
        }
        cout<<"Thank you for adding details of your closed ones";
    }
    else{
        cout<<"Thank you for adding details of your closed ones";
    }
    
}