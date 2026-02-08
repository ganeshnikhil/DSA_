# 2. Frequency in a Linked List
# A problem that demonstrates linked list traversal and counting techniques, teaching how to search and count occurrences of specific elements.

# Given a singly linked list and a key, count the number of occurrences of the given key in the linked list. This operation is fundamental in data analysis and frequency counting applications where you need to determine how often specific values appear in sequential data structures. The challenge involves understanding how to traverse the entire list while maintaining an accurate count of matches.

# This introduces sequential search algorithms and frequency analysis techniques that are crucial for data processing and statistical analysis of linked data structures.

# Your task: Count occurrences of a specific key in a linked list using efficient traversal and counting methods.

# Examples
# Input:

# Linked List: 1->2->1->2->1->3->1, key = 1
# Output:

# 4
# Input:

# Linked List: 1->2->1->2->1, key = 3
# Output:

# 0

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def count_occurrences(head, key):
    count = 0
    current = head
    while current:
        if current.val == key:
            count += 1
        current = current.next
    return count

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