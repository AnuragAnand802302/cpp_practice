#include <bits/stdc++.h>
using namespace std;
class linkedlist{
    struct node{
        int data;
        node* next;
        node(int e){
            data=e;
            next = nullptr;
        }
    };
    node* head;
    node* tail;
    public:
    linkedlist(){
        head=tail=nullptr;
    }
    void insertelement(int value){
        node* newnode = new node(value);
        if(head == nullptr){
            head = tail = newnode;
        }
        else{
            tail->next=newnode;
            tail = newnode;
        }
    }
    void inserthead(int value){
        if(head == nullptr){
            insertelement(value);
        }
        else{
            node* newnode = new node(value);
            newnode->next = head;
            head = newnode;
        }
    }
    void Insert(int value, int index){
        if(index < 1){
            cout<<"invalid index\n"; return;
        }
        if(index == 1){
            inserthead(value);
            return;
        }
        int c =1;
        node* temp = head;
        while(temp != nullptr && c < index-1){
            temp = temp->next;
            c++;
        }
        if(temp == nullptr){
            cout<<"invalid index\n";
            return;
        }
        node* Newnode = new node(value);
        Newnode->next = temp->next;
        temp->next = Newnode;
        if(Newnode->next == nullptr){
            tail = Newnode;
        }
    }
    int sizeofll() const{
        node* temp = head;
        int c=0;
        while(temp != nullptr){
            temp = temp->next;
            c++;
        }
        return c;
    }
    void deletetail(){
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = nullptr;
            return;
        }
        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
    }
    void deletehead(){
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        node* temp = head;
        head = head->next;
        if(head == nullptr){
            tail = nullptr;
        }
        delete temp;
    }
    void Delete(int value){
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        if(head->data  == value){
            node* temp = head;
            head = head->next;
            if(head == nullptr){
                tail = nullptr;
            }
            delete temp;
            return;
        }
        node* temp = head;
        while(temp->next != nullptr && temp->next->data != value){
            temp = temp->next;
        }
        if(temp->next == nullptr){
            cout<<"target not found\n";
            return;
        }
        node* Todelete = temp->next;
        temp->next = Todelete->next;
        if(Todelete == tail){
            tail = temp;
        }
        delete Todelete;
    }
    void display() const{
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        node* temp = head;
        while(temp != nullptr){
            cout<<temp->data;
            if(temp->next != nullptr) cout << " -> ";
            temp = temp->next;
        }
        cout<<'\n';
    }
    int searchelement(int target) const{
        node* temp = head;
        int c=0;
        while(temp != nullptr){
            if(temp->data == target){
                return c;
            }
            temp = temp->next;
            c++;
        }
        return -1;
    }
    ~linkedlist(){
        node* temp = head;
        while(temp != nullptr){
            node* Nextnode = temp->next;
            delete temp;
            temp = Nextnode;
        }
    }
};
int main() {
    linkedlist l1;
    cout<<"enter the size and elements of list\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        l1.insertelement(temp);
    }
    cout<<"the new list is:\n";
    l1.display();
    cout<<"do you want to add elements in the list by index(y/n):\n";
    string str;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, str);
    bool consent;
    if(str == "y"){
        consent = true;
    }
    else{
        consent = false;
    }
    while(consent){
        cout<<"input the element and index for the new element in the list:\n";
        int temp,x;
        cin>>temp>>x;
        l1.Insert(temp, x);
        cout<<"the new list is:\n";
        l1.display();
        cout<<"do you want to further add elements in the list by index(y/n):\n";
        cin.ignore();
        getline(cin, str);
        if(str == "n"){
            consent = false;
        }
    }
    return 0;
}