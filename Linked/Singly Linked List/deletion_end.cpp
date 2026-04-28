#include <iostream>
using namespace std;

// Node class for the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        this->data = x;
        this->next = nullptr;
    }
};

// Function to remove the last node
// of the linked list
Node* removeLastNode(Node* head) {
    // If the list is empty, return nullptr
    if (head == nullptr) {
        return nullptr;
    }

    // If the list has only one node, delete it and return nullptr
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    // Find the second last node
    Node* secondLast = head;
    while (secondLast->next->next != nullptr) {
        secondLast = secondLast->next;
    }

    // Delete the last node
    delete secondLast->next;

    // Change next of second last
    secondLast->next = nullptr;

    return head;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Creating a static linked list
    // 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);


    // Removing the last node
    head = removeLastNode(head);

    printList(head);

    return 0;
}