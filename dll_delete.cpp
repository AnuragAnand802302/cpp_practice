#include <bits/stdc++.h>
using namespace std;
class linkedlist{
    struct node{
        int data;
        node* next;
        node* prev;
        node(int value){
            data=value;
            next = prev = nullptr;
        }
        node(int value, node* temp){
            data = value;
            prev = temp;
            next = nullptr;
        }
    };
    node* head;
    node* tail;
    int sz;
    public:
    linkedlist(){
        head = tail = nullptr;
        sz = 0;
    }
    void PUSH_BACK(int value){
        if(head == nullptr){
            node* Newnode = new node(value);
            head = tail = Newnode;
            
        }
        else{
            node* Newnode = new node(value, tail);
            tail->next = Newnode;
            tail = Newnode;
            
        }
        sz++;
    }
    void PUSH_AT(int value, int index){
        if(index<1 || index>sz+1){
            cout<<"invalid index\n";
            return;
        }
        if(index == 1){
            PUSH_FRONT(value);
            return;
        }
        if(index == sz+1){
            PUSH_BACK(value);
            return;
        }
        node* temp = head;
        int pos = 1;
        while(temp->next != nullptr && pos < index-1){
            temp = temp->next;
            pos++;
        }
        node* Newnode = new node(value, temp);
        Newnode->next = temp->next;
        temp->next->prev = Newnode;
        temp->next = Newnode;
        sz++;
    }
    void PUSH_FRONT(int value){
        if(head == nullptr){
            node* Newnode = new node(value);
            head = tail = Newnode;
            
        }
        else{
            node* Newnode = new node(value);
            Newnode->next = head;
            head->prev = Newnode;
            head = Newnode;
        }
        sz++;
    }
    void POP_BACK(){
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        if(head->next == nullptr){
            node* temp = head;
            head = tail = nullptr;
            delete temp;
            sz--;
            return;
        }
        node* temp=tail;
        temp->prev->next = nullptr;
        tail = temp->prev;
        temp->prev = nullptr;
        delete temp;
        sz--;
    }
    void POP_FRONT(){
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        if(head->next == nullptr){
            node* temp = head;
            head = tail = nullptr;
            delete temp;
            sz--;
            return;
        }
        node* temp = head;
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
        delete temp;
        sz--;
    }
    void POP_AT(int idx){
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        if(idx<1 || idx>sz){
            cout<<"invalid index\n";
            return;
        }
        if(idx == 1){
            POP_FRONT();
            return;
        }
        if(idx == sz){
            POP_BACK();
            return;
        }
        node* temp = head;
        int pos = 1;
        while(temp->next != nullptr && pos<idx-1){
            temp = temp->next;
            pos++;
        }
        node* Todelete = temp->next;
        temp->next = Todelete->next;
        if(temp->next != nullptr){
            Todelete->next->prev = temp;
        }
        Todelete->next = Todelete->prev = nullptr;
        delete Todelete;
        sz--;
    }
    void DISPLAY(){
        cout<<"from index 1\n";
        node* temp = head;
        while(temp != nullptr){
            cout<<temp->data;
            if(temp->next != nullptr){
                cout<<"->";
            }
            temp = temp->next;
        }
        cout<<"\nfrom tail of the list\n";
        temp = tail;
        while(temp != nullptr){
            cout<<temp->data;
            if(temp->prev != nullptr){
                cout<<"->";
            }
            temp = temp->prev;
        }
        cout<<'\n';
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
    int c,n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        l1.PUSH_BACK(temp);
    }
    cout<<"the list given is \n";
    l1.DISPLAY();
    cout<<"do you want to delete the elements of the list?(1/0)\n";
    cin>>c;
    bool consent = (c == 1);
    while(consent){
        cout<<"input the index of the element to be deleted\n";
        cin>>temp;
        l1.POP_AT(temp);
        cout<<"the new list is\n";
        l1.DISPLAY();
        cout<<"do you want to delete the elements of the list again ?(1/0)\n";
        cin>>c;
        consent = (c == 1);
    }
    return 0;
}