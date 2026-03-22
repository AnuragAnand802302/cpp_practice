#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int value){
        data=value;
        next=nullptr;
    }
};
int main() {
    node* head = nullptr;
    node* temp = nullptr;
    int n;
    cout<<"Enter the size of linked list\n";
    cin>>n;
    cout<<"enter the elements of linked list\n";
    for(int i=0;i<n;i++){         //for adding element to the linked list;
        int value;
        cin>>value;
        node* newnode= new node(value);
        if(head == nullptr){     //for assigning first element to head pointer
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next=newnode;     // storing address of new node in prevous node's next pointer
            temp=newnode;           // temp is now the current node with next pointing to nullptr
        }
    }
    temp = head;
    while(temp != nullptr){    // or we can use "for(int i=0;i<n;i++)" only if we know the size of linked list.
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    temp = head;
    while(temp != nullptr){
        node* nextNode = temp->next; 
        delete temp;                 
        temp = nextNode;             
    }
    return 0;
}