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
    void Insert(int value){
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
        l1.Insert(temp);
    }
    cout<<"the list input is:\n";
    l1.Display();
    return 0;
}