#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    
    struct Node {
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    Node* tail;
    int sz;

public:

    CircularQueue() {
        tail = nullptr;
        sz = 0;
    }

    // Push element into queue
    void Push(int value) {

        Node* newNode = new Node(value);

        // If queue is empty
        if (tail == nullptr) {
            tail = newNode;
            tail->next = tail;
        }
        else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }

        sz++;
    }

    // Remove front element
    void Pop() {

        if (tail == nullptr) {
            cout << "\nQueue is empty\n";
            return;
        }

        // Only one element present
        if (tail->next == tail) {
            delete tail;
            tail = nullptr;
            sz--;
            return;
        }

        Node* head = tail->next;
        tail->next = head->next;

        delete head;
        sz--;
    }

    // Front element
    int Top() {

        if (tail == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }

        return tail->next->data;
    }

    // Last element
    int Back() {

        if (tail == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }

        return tail->data;
    }

    // Queue size
    int Size() {
        return sz;
    }

    // Check empty
    bool Empty() {
        return (sz == 0);
    }

    // Display queue
    void Display() {

        if (tail == nullptr) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = tail->next;

        cout << "Queue elements: ";

        do {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != tail->next);

        cout << endl;
    }

    // Destructor
    ~CircularQueue() {

        if (tail == nullptr)
            return;

        Node* head = tail->next;
        tail->next = nullptr;

        while (head != nullptr) {
            Node* nextNode = head->next;
            delete head;
            head = nextNode;
        }

        tail = nullptr;
    }
};

int main() {

    CircularQueue q;

    int n;

    cout << "Enter number of elements to insert: ";
    cin >> n;

    cout << "Enter queue elements:\n";

    // Input using loop
    for (int i = 0; i < n; i++) {

        int value;
        cin >> value;

        q.Push(value);
    }

    // Display queue
    q.Display();

    // Top element
    cout << "Front element: " << q.Top() << endl;

    // Back element
    cout << "Back element: " << q.Back() << endl;

    // Queue size
    cout << "Queue size: " << q.Size() << endl;

    // Empty check
    if (q.Empty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";

    // Pop operation
    cout << "\nPerforming one pop operation...\n";
    q.Pop();

    // Display after pop
    q.Display();

    cout << "Updated size: " << q.Size() << endl;

    return 0;
}