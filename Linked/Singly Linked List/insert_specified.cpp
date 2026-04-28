#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int x) {
        val = x;
        next = nullptr;
    }
};

Node *insertPos(Node *head, int pos, int val) {

    if (pos < 1)
        return head;

    // head will change if pos=1
    if (pos == 1) {
        Node *newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;

    // Traverse to the node that will be present just before the new node
    for (int i = 1; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }

    // If position is greater than the 
    // number of nodes
    if (curr == nullptr)
        return head;

    Node *newNode = new Node(val);

    // update the next pointers
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->val;   
        if (curr->next != nullptr) {
            cout << " -> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main() {

    // Creating the list 1->2->4
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);

    int val = 3, pos = 4;
    head = insertPos(head, pos, val);
    printList(head);

    return 0;
}