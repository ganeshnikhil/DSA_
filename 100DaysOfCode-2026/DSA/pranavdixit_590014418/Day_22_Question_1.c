#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int findMiddle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

struct Node* newNode(int val) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->next = NULL;
    return node;
}

int main() {
    struct Node* head = newNode(2);
    head->next = newNode(4);
    head->next->next = newNode(6);
    head->next->next->next = newNode(7);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(1);

    printf("Middle element: %d\n", findMiddle(head));
    return 0;
}
