#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main() {
    Node* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);
    Node* middle1 = findMiddle(head1);
    printf("%d\n", middle1->data);
    Node* head2 = createNode(2);
    head2->next = createNode(4);
    head2->next->next = createNode(6);
    head2->next->next->next = createNode(7);
    head2->next->next->next->next = createNode(5);
    head2->next->next->next->next->next = createNode(1);
    Node* middle2 = findMiddle(head2);
    printf("%d\n", middle2->data);
    return 0;
}