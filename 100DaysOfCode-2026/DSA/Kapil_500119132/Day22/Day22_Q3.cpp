#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next) cout << " ";
        current = current->next;
    }
    cout << endl;
}

// Helper function to insert at end
void insert(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

int main() {
    Node* head = nullptr;
    insert(head, 49);
    insert(head, 10);
    insert(head, 30);

    printList(head); // Output: 49 10 30

    Node* head2 = nullptr;
    insert(head2, 1);
    insert(head2, 2);

    printList(head2); // Output: 1 2

    return 0;
}
