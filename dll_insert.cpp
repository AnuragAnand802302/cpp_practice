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
    void push_at(int value, int index){
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
    void Display(){
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
    int n;
    cout<<"enter the size and elements of the linked list\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        l1.PUSH_BACK(temp);
    }
    cout<<"the list input is:\n";
    l1.Display();
    cout<<"\nenter element to add at the front of list\n";
    int temp;
    cin>>temp;
    l1.PUSH_FRONT(temp);
    cout<<"new list is \n";
    l1.Display();
    int c;
    bool consent = false;
    cout<<"\ndo you want to add element to list?(1/0)\n";
    cin>>c;
    if(c==0){}
    else if(c == 1){
        consent = true;
    }
    while(consent){
        cout<<"enter the element and index at which to input in list\n";
        int idx;
        cin>>temp>>idx;
        l1.push_at(temp,idx);
        cout<<"\nnew list is:\n";
        l1.Display();
        cout<<"\ndo you want to add element to list again?(1/0)\n";
        cin>>c;
        if(c==1){}
        else if(c == 0){
            consent = false;
        }
    }
    return 0;
}