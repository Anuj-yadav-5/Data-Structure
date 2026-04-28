#include<iostream>
using namespace std;

// singly linked list node structure
class Node {
public:
    int data;
    Node* next;

    // constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

int main() {
    
    // Create the first node (head of the list)
    // Node* head = new Node(10);

    // // Link the second node
    // head->next = new Node(20);

    // // Link the third node
    // head->next->next = new Node(30);

    // // Link the fourth node
    // head->next->next->next = new Node(40);
      
    // // Link the fifth node
    // head->next->next->next->next = new Node(50);
    Node* head = new Node(10);
    Node* tail = head;

for(int i = 10; i <= 100; i += 5) {
    tail->next = new Node(i);
    tail = tail->next;
}

    // printing linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}