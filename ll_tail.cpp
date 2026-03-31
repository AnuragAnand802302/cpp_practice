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
            tail = tail->next;
        }
    }
    int sizeofll(){
        node* temp = head;
        if(temp == nullptr) return -1;
        int c=0;
        while(temp != nullptr){
            temp = temp->next;
            c++;
        }
        return c;
    }
    void display(){
        node* temp = head;
        if(temp == nullptr) return;
        while(temp != nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"END";
    }
    int searchelement(int target){
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
    int n,item;
    cout<<"enter the desired size of linked list\n";
    cin>>n;
    linkedlist l1;
    cout<<"enter the elements of linked list\n";
    for(int i = 0;i<n;i++){
        int value;
        cin>>value;
        l1.insertelement(value);
    }
    cout<<"type the item to be searched in the linkedlist\n";
    cin>>item;
    int a = l1.searchelement(item);
    if(a == -1){
        cout<<" item not found in the list\n";
    }
    else{
        cout<<"item found at "<<a<<" index\n";
    }
    cout<<'\n'<<"linked list input by you is -> \n";
    l1.display();
    return 0;
}