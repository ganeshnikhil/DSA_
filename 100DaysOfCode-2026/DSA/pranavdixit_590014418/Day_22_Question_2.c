#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int countFrequency(struct Node* head, int key) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key)
            count++;
        temp = temp->next;
    }

    return count;
}

struct Node* newNode(int val) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->next = NULL;
    return node;
}

int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(1);
    head->next->next->next = newNode(2);
    head->next->next->next->next = newNode(1);
    head->next->next->next->next->next = newNode(3);
    head->next->next->next->next->next->next = newNode(1);

    int key = 1;
    printf("Frequency of %d: %d\n", key, countFrequency(head, key));
    return 0;
}
