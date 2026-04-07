#include <bits/stdc++.h>
using namespace std;
class linkedlist{
    struct node{
        int data;
        node* next;
        node(int d){
            data = d;
            next = nullptr;
        }
    };
    node* head;
    node* tail;
    int sz;
    public:
    linkedlist(){
        head = tail = nullptr;
        sz=0;
    }
    void insert(int value){
        node* newnode = new node(value);
        if(head == nullptr){
            head = tail = newnode;
            sz++;
        }
        else{
            tail->next = newnode;
            tail = tail->next;
            sz++;
        }
    }
    void display() const{
        if(head == nullptr){ cout<<"list is empty"; return;}
        node* temp = head;
        while(temp != nullptr){
            cout<<temp->data;
            if(temp->next != nullptr){
                cout<<"->";
            }
            temp = temp->next;
        }
    }
    void Delete(int index){
        if(head == nullptr){
        cout << "List is empty\n";
        return;
        }
        if(index < 1 || index > sz){
            cout << "Index out of range\n";
            return;
        }
        if(index == 1){
            node* temp = head;
            head = head->next;
            delete temp;
            sz--;
            if(head == nullptr){
                tail = nullptr;
            }
            return;
        }
        node* current = head;
        for(int i = 1; i < index - 1; i++){
            current = current->next;
        }
        node* temp = current->next;
        current->next = temp->next;
        if(temp == tail){
            tail = current;
        }
        delete temp;
        sz--;
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
    int n,in;
    cout<<"enter size and elements of linked list"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        l1.insert(temp);
    }
    cout<<"enter the index to be deleted\n";
    cin>>in;
    l1.Delete(in);
    cout<<"linked after deletion is\n";
    l1.display();
    return 0;
}