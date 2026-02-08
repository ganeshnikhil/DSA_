#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* middleNode(struct ListNode* head) 
{
    if (head == NULL || head->next == NULL) 
    {
        return head;
    }
    
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    
    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

struct ListNode* newNode(int val) 
{
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void printList(struct ListNode* head) 
{
    struct ListNode* temp = head;
    while (temp != NULL) 
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main() 
{
    int size, val;
    
    printf("Enter the size of the linked list: ");
    scanf("%d", &size);
    if (size <= 0) 
    {
        printf("Invalid size for the linked list.\n");
        return 0;
    }
    
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    
    printf("Enter %d elements for the linked list: ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &val);
        struct ListNode* node = newNode(val);
        if (head == NULL) 
        {
            head = node;
            tail = node;
        } 
        else 
        {
            tail->next = node;
            tail = node;
        }
    }
    
    struct ListNode* middle = middleNode(head);
    printf("The middle node value is: %d\n", middle->val);
    
    struct ListNode* current = head;
    while (current != NULL) 
    {
        struct ListNode* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}