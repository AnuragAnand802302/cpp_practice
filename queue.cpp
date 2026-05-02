#include <bits/stdc++.h>
using namespace std;
class Queue{
    struct node{
        int data;
        node* next;
        node(int value){
            data = value;
            next = nullptr;
        }
        node(int value, node* ptr){
            data = value;
            next = ptr;
        }
    };
    node* head;
    node* tail;
    int sz;
    public:
    Queue(): head(nullptr), tail(nullptr), sz(0) {}
    void Enqueue(int value){
        node* Nextqueue = new node(value);
        if(head == nullptr){
            head = tail = Nextqueue;
        }
        else{
            tail->next = Nextqueue;
            tail = Nextqueue;
        }
        sz++;
    }
    void Dequeue(){
        if(head == nullptr){
            cout<<"\nthe queue is empty\n";
            return;
        }
        if(head == tail){
            node* temp = head;
            head = tail = nullptr;
            delete temp;
            sz--;
            return;
        }
        node* temp = head;
        head = temp->next;
        delete temp;
        sz--;
    }
    int Front(){
        if(head == nullptr){
            throw runtime_error("\ngiven queue is empty\n");
        }
        return head->data;
    }
    int Back(){
        if(head == nullptr){
            throw runtime_error("\ngiven queue is empty\n");
        }
        return tail->data;
    }
    int Size(){
        return sz;
    }
    bool Empty(){
        if(sz == 0){
            return true;
        }
        else{
            return false;
        }
    }
    ~Queue(){
        node* temp = head;
        while(temp != nullptr){
            node* Nextnode = temp->next;
            delete temp;
            temp = Nextnode;
        }
    }

};
int main(){
    Queue q1;
    cout<<"enter the size and elements of queue\n";
    int sz,top,back,temp;
    cin>>sz;
    for(int i=0;i<sz;i++){
        cin>>temp;
        q1.Enqueue(temp);
    }
    top = q1.Front();
    back = q1.Back();
    cout<<"top and back element of the queue is\n"<<top<<'\n'<<back<<'\n';
    q1.Dequeue();
    top = q1.Front();
    back = q1.Back();
    sz = q1.Size();
    cout<<"size,top and back element of the queue after the deletion of top element is\n"<<sz<<'\n'<<top<<'\n'<<back<<'\n';
    return 0;
}