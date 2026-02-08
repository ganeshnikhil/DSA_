#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};

int count(struct ListNode* head, int key) 
{
    int count = 0;
    struct ListNode* current = head;
    while (current != NULL) 
    {
        if (current->val == key) 
        {
            count++;
        }
        current = current->next;
    }
    return count;
}

struct ListNode* newNode(int val) 
{
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void freeList(struct ListNode* head) 
{
    struct ListNode* temp;
    while (head != NULL) 
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() 
{
    int n, key;
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("0\n");
        return 0;
    }
    
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    
    for (int i = 0; i < n; i++) 
    {
        int val;
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
    
    scanf("%d", &key);
    int result = count(head, key);
    printf("%d\n", result);
    
    freeList(head);
    return 0;
}