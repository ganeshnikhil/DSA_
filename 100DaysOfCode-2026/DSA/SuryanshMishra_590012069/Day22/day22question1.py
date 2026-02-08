# #1. Middle of a Linked List
# A problem that introduces linked list traversal techniques and teaches how to find the middle element efficiently using the two-pointer approach.

# Given the head of a linked list, the task is to find the middle node. For example, the middle of 1->2->3->4->5 is 3. If there are two middle nodes (even count), return the second middle. For example, middle of 1->2->3->4->5->6 is 4. This problem appears frequently in interviews and real-world applications like implementing efficient search algorithms or dividing linked lists for processing. You can solve this by first counting nodes and then traversing again, but try to think of more efficient approaches using the two-pointer technique.

# This teaches two-pointer traversal and optimal linked list navigation techniques that are essential for efficient list processing and divide-and-conquer algorithms.

# Your task: Find the middle node of a linked list using efficient traversal techniques without multiple passes.

# Examples
# Input:

# Linked list: 1->2->3->4->5
# Output:

# 3
# Input:

# Linked list: 2->4->6->7->5->1
# Output:

# 7

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def find_middle(head):
    slow = fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
    return slow

# Helper to build a linked list from a list
def build_linked_list(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    curr = head
    for val in arr[1:]:
        curr.next = ListNode(val)
        curr = curr.next
    return head