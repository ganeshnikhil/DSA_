// Problem Statement: Given a linked list, print all the elements of the linked list separated by space. This is a 
// fundamental operation in linked list manipulation and serves as the building block for more 
// complex linked list algorithms. Understanding how to properly traverse and display linked 
// list contents is essential for debugging and data visualization in real-world applications. 
// This teaches basic linked list traversal and output formatting techniques that are essential 
// for linked list debugging and data presentation. 
// Your task: Traverse and print all elements of a linked list in the correct order with proper 
// spacing. 
// Examples Input: LinkedList: 1 -> 2 
// Output: 1 2


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

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);  
        head = head->next;          
    }
    printf("\n");                   
}

int main() {
    struct Node* head1 = createNode(1);
    head1->next = createNode(2);

    printf("Output:");
    printList(head1);  


    return 0;
}
