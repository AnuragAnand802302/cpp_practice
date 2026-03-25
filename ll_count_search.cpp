#include <bits/stdc++.h>
using namespace std;
class linkedlist{
    struct node{
        int data;
        node* next;
        node(int value){
            data = value;
            next = nullptr;
        }
    };
    node* head;
    public:
    linkedlist(){
        head = nullptr;
    }
    void Insert(int value){
        node* newnode = new node(value);
        if(head == nullptr){
            head = newnode;
            return;
        }
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void display(){
        node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<' ';
            temp = temp->next;
        }
    }
    int countelement(){
        node* temp = head;
        int c=0;
        while(temp != nullptr){
            c++;
            temp = temp->next;
        }
        return c; 
    }
    int search(int target){
        node* temp = head;
        int c=0;
        while(temp != nullptr){
            c++;
            if(temp->data == target){
                return c;
            }
            temp = temp->next;
        }
        return -1;
    }
    ~linkedlist(){
        node* temp = head;
        while(temp != nullptr){
            node* nextNode = temp->next;
            delete temp;
            temp = nextNode;

        }
    }
};
int main() {
    linkedlist L1;
    int n;
    cout<<"enter the size of list \n";
    cin>>n;
    cout<<"enter the items of list\n";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        L1.Insert(element);
    }
    cout<<"given list and count of elements in it are \n";
    L1.display();
    cout<<'\n'<<L1.countelement();
    cout<<"\nenter the target to be searched\n";
    int target;
    cin>>target;
    int a = L1.search(target);
    if(a>0){
        cout<<"Element found at "<<a<<" node.";
    }
    else{
        cout<<"element not found in the list.";
    }
    return 0;

}