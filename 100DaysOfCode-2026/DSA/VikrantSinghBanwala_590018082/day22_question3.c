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
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d", current->data);
        current = current->next;
        if (current != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}
int main() {
    Node* head1 = createNode(1);
    head1->next = createNode(2);
    printLinkedList(head1);
    Node* head2 = createNode(49);
    head2->next = createNode(10);
    head2->next->next = createNode(30);
    printLinkedList(head2);
    return 0;
}