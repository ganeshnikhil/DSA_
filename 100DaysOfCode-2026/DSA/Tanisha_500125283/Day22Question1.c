// Problem Statement: Given the head of a linked list, the task is to find the middle node. For example, the middle 
// of 1->2->3->4->5 is 3. If there are two middle nodes (even count), return the second 
// middle. For example, middle of 1->2->3->4->5->6 is 4. This problem appears frequently in 
// interviews and real-world applications like implementing efficient search algorithms or 
// dividing linked lists for processing. You can solve this by first counting nodes and then 
// traversing again, but try to think of more efficient approaches using the two-pointer 
// technique. 
// This teaches two-pointer traversal and optimal linked list navigation techniques that are 
// essential for efficient list processing and divide-and-conquer algorithms. 
// Task: Find the middle node of a linked list using efficient traversal techniques without 
// multiple passes. 
// Examples Input: Linked list: 1->2->3->4->5 
// Output: 3 


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


struct Node* Middle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           
        fast = fast->next->next;     
    }

    return slow;
}


void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL)
            printf("->");
        head = head->next;
    }
    printf("\n");
}

int main() {
    
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Linked List: ");
    printList(head);

    struct Node* middle = Middle(head);
    printf("%d", middle->data);

    return 0;
}
