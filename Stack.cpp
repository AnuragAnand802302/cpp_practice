#include <bits/stdc++.h>
using namespace std;
class Stack{
    struct node{
        int data;
        node* next;
        node(int value){
            data = value;
            next = nullptr;
        }
        node(int value, node* &ptr){
            data = value;
            next = ptr;
        }
    };
    node* head;
    int sz;
    public:
    Stack(){
        head = nullptr;
        sz = 0;
    }
    void PUSH(int value){
        node* Newstack = new node(value, head);
        head = Newstack;
        sz++;
    }
    void TOP(){
        if(head == nullptr){
            cout<<"\nstack is empty\n";
            return;
        }
        else{
            cout<<head->data<<'\n';
        }
    }
    void SIZE(){
        cout<<sz<<'\n';
    }
    void POP(){
        if(head == nullptr){
            cout<<"\nstack is empty\n";
            return;
        }
        else{
            node* temp = head;
            head = temp->next;
            delete temp;
            sz--;
        }
    }
    ~Stack(){
        if(head == nullptr){
            return;
        }
        node* temp = head;
        while(temp != nullptr){
            node* Nextstack = temp->next;
            delete temp;
            temp = Nextstack;
        }
    }

};
int main(){
    Stack s1;
    cout<<"enter the size and elements of the stack\n";
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        s1.PUSH(temp);
    }
    cout<<"the top element of the stack is \n";
    s1.TOP();
    cout<<"the top element of the stack after previous top element is deleted\n";
    s1.POP();
    s1.TOP();
    cout<<"the size of new stack is \n";
    s1.SIZE();
    return 0;
}