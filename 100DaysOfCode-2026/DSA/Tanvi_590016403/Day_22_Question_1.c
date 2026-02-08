#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Task 1: Print linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Task 2: Find middle node using two-pointer approach
void findMiddle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("Middle Node: %d\n", slow->data);
}

// Task 3: Count occurrences of a given key
int countFrequency(struct Node* head, int key) {
    int count = 0;
    while (head != NULL) {
        if (head->data == key)
            count++;
        head = head->next;
    }
    return count;
}

// Main function
int main() {
    struct Node* head = NULL;

    // Example: 1 -> 2 -> 1 -> 2 -> 1 -> 3 -> 1
    int values[] = {1, 2, 1, 2, 1, 3, 1};
    int n = sizeof(values) / sizeof(values[0]);
    for (int i = 0; i < n; i++)
        insertEnd(&head, values[i]);

    printf("Linked List: ");
    printList(head);                    // Task 1
    findMiddle(head);                  // Task 2
    int key = 1;
    printf("Frequency of %d: %d\n", key, countFrequency(head, key)); // Task 3

    return 0;
}
