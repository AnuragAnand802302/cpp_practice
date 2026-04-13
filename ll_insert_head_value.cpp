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
    linkedlist l1,l2;
    int n;
    cout<<"enter the size and elements of linked lists\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        l1.insertelement(t);
    }
    cout<<"the given linked list is\n";
    l1.display();
    cout<<"enter the new head for this list:\n";
    int value;
    cin>>value;
    l1.inserthead(value);
    cout<<"modified list is:\n";
    l1.display();
    cout<<"enter the head for new list:\n";
    cin>>value;
    l2.inserthead(value);
    cout<<"new list which is modified according to head is:\n";
    l2.display();
    cout<<"enter the size and elements of new list:\n";
    cin>>n;
    for(int i=1;i<n;i++){
        int temp;
        cin>>temp;
        l2.inserthead(temp);
    }
    cout<<"the new list is:\n";
    l2.display();
    return 0;
}