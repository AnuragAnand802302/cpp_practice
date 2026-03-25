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
void addelement(node*& head , int value){
    node* temp = nullptr;
    node* newnode = new node(value);
    if(head == nullptr){
        head = newnode;
        temp = newnode;
        return;
    }
    temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newnode;
}
void traverse(node* head){
    node* temp = nullptr;
    temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"end";
}
void deleteelement(node*& head){
    if(head == nullptr){
        return;
    }
    deleteelement(head->next);
    delete head;
    head = nullptr;
}
int main(){
    int n;
    node* head = nullptr;
    cout<<"enter the size of linked list\n";
    cin>>n;
    cout<<"enter the elements \n";
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        addelement(head, value);
    }
    traverse(head);
    deleteelement(head);
    return 0;
}