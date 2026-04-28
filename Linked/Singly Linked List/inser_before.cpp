#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Recursive function to insert a new node with value 
// newData before the node with the given key
Node* insertBeforeKey(Node* head, int key, int newData) {
  
    // Base case: if the list is empty
    if (head == nullptr) {
        return nullptr;
    }

    // If the head's data matches the key, 
    // insert new node
    if (head->data == key) {
        Node* new_node = new Node(newData);
        new_node->next = head;
        return new_node;
    }

    // Recursively call for the next node
    head->next = insertBeforeKey(head->next, key, newData);
    return head;
}

// Function to print the linked list
void printList(Node* node) {
    Node* curr = node;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {
  
    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int newData = 6;
    int key = 2;

    head = insertBeforeKey(head, key, newData);

    printList(head);

    return 0;
}