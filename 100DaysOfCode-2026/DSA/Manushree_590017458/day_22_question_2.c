#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int countOccurrences(struct Node* head, int key) {
    int count = 0;
    while (head != NULL) {
        if (head->data == key)
            count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct Node* head = createNode(5);
    head->next = createNode(3);
    head->next->next = createNode(5);
    head->next->next->next = createNode(2);
    head->next->next->next->next = createNode(5);

    int key = 5;
    printf("%d\n", countOccurrences(head, key));

    return 0;
}
