#include <bits/stdc++.h>
using namespace std;
class LinkedList{
    struct node{
        int data;
        node* next;
        node(int value){
            data = value;
            next = nullptr;
        }
    };
    node* head;
    node* tail;
    int sz;
    public:
    LinkedList(){
        head = tail = nullptr;
        sz = 0;
    }
    void PUSH_BACK(int value){
        node* Newnode = new node(value);
        if(head == nullptr){
            head = tail = Newnode;
            tail->next = head;
        }
        else{
            Newnode->next = head;
            tail->next = Newnode;
            tail = Newnode;
        }
        sz++;
    }
    void POP_BACK(){
        if(head == nullptr){
            cout<<"\nlist is empty\n";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = nullptr;
            sz--;
            return;
        }
        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        temp->next = head;
        tail = temp;
        sz--;
    }
    void Display(){
        if(head == nullptr){
            cout<<"list is empty\n";
            return;
        }
        node* temp = head;
        do{
            cout<<temp->data;
            if(temp->next != head){
                cout<<"->";
            }
            temp = temp->next;
        }while(temp != head);
    }
    ~LinkedList(){
        if(head == nullptr){
            return;
        }
        node* temp = head->next;
        while(temp != head){
            node* Nextnode = temp->next;
            delete temp;
            temp = Nextnode;
        }
        delete temp;
        head = tail = nullptr;
    }
};
int main(){
    LinkedList l1;
    cout<<"enter the size and elements of the list\n";
    int n,value;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        l1.PUSH_BACK(value);
    }
    cout<<"the list given is\n";
    l1.Display();
    return 0;
}