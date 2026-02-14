// day26.md
// 1. Swap Kth nodes from ends

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Create new node
Node* create_node(int value) {
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = nullptr;
    return new_node;
}

// Print list
void print_list(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Swap kth node from start and end
Node* swap_kth_nodes(Node* head, int k) {
    if (!head || !head->next) return head;

    // Step 1: Count length
    int n = 0;
    Node* curr = head;
    while (curr) {
        n++;
        curr = curr->next;
    }

    if (k > n) return head; // invalid k
    if (2*k - 1 == n) return head; // same node, no swap needed

    // Step 2: Find kth from start and end, with their previous nodes
    Node *first = head, *first_prev = nullptr;
    Node *second = head, *second_prev = nullptr;
    curr = head;
    int count = 1;

    while (curr) {
        if (count == k-1) first_prev = curr;
        if (count == k) first = curr;
        if (count == n-k) second_prev = curr;
        if (count == n-k+1) second = curr;
        curr = curr->next;
        count++;
    }

    // Step 3: Update previous nodes
    if (first_prev) first_prev->next = second;
    if (second_prev) second_prev->next = first;

    // Step 4: Swap next pointers
    Node* temp = first->next;
    first->next = second->next;
    second->next = temp;

    // Step 5: Update head if needed
    if (k == 1) head = second;
    if (k == n) head = first;

    return head;
}

int main() {
    // Example list: 1->2->3->4->5
    Node* head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);
    head->next->next->next = create_node(4);
    head->next->next->next->next = create_node(5);

    cout << "Original List: ";
    print_list(head);

    int k = 2;
    head = swap_kth_nodes(head, k);

    cout << "After swapping " << k << "-th node from start and end: ";
    print_list(head);

    return 0;
}
