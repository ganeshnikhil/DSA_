#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int countFrequency(Node* head, int key) {
    int count = 0;
    Node* current = head;
    while (current) {
        if (current->data == key) count++;
        current = current->next;
    }
    return count;
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
    insert(head, 1);
    insert(head, 2);
    insert(head, 1);
    insert(head, 2);
    insert(head, 1);
    insert(head, 3);
    insert(head, 1);

    int key = 1;
    cout << countFrequency(head, key) << endl; // Output: 4

    key = 3;
    cout << countFrequency(head, key) << endl; // Output: 1

    key = 4;
    cout << countFrequency(head, key) << endl; // Output: 0

    return 0;
}
