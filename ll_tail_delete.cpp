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
    linkedlist l1;
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
    l1.deletehead();
    l1.deletetail();
    n = l1.sizeofll();
    cout<<"current no. of element of linked list and its data\n"<<n<<'\n';
    l1.display();
    return 0;
}