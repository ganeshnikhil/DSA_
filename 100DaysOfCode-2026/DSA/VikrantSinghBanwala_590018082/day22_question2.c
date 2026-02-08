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
int countOccurrences(Node* head, int key) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    return count;
}
int main() {
    Node* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(1);
    head1->next->next->next = createNode(2);
    head1->next->next->next->next = createNode(1);
    head1->next->next->next->next->next = createNode(3);
    head1->next->next->next->next->next->next = createNode(1);
    int key1 = 1;
    int count1 = countOccurrences(head1, key1);
    printf("%d\n", count1);
    Node* head2 = createNode(1);
    head2->next = createNode(2);
    head2->next->next = createNode(1);
    head2->next->next->next = createNode(2);
    head2->next->next->next->next = createNode(1);
    int key2 = 3;
    int count2 = countOccurrences(head2, key2);
    printf("%d\n", count2);
    return 0;
}