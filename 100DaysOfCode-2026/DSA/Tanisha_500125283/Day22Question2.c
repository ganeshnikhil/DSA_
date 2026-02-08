// Problem Statement:Given a singly linked list and a key, count the number of occurrences of the given key in the 
// linked list. This operation is fundamental in data analysis and frequency counting 
// applications where you need to determine how often specific values appear in sequential 
// data structures. The challenge involves understanding how to traverse the entire list while 
// maintaining an accurate count of matches. 
// Task: Count occurrences of a specific key in a linked list using efficient traversal and 
// counting methods. 
// Examples Input: Linked List: 1->2->1->2->1->3->1, key = 1 
// Output: 4

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


int countOccurrences(struct Node* head, int key) {
    int count = 0;
    while (head != NULL) {
        if (head->data == key) {
            count++;
        }
        head = head->next;
    }
    return count;
}


int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(1);
    head->next->next->next = createNode(2);
    head->next->next->next->next = createNode(1);
    head->next->next->next->next->next = createNode(3);
    head->next->next->next->next->next->next = createNode(1);

    int key = 1;
    int result = countOccurrences(head, key);

    printf("%d", result); 

    return 0;
}
