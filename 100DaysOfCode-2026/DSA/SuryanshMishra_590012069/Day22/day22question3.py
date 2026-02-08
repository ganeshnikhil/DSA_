# 3. Print Linked List
# A problem that teaches basic linked list traversal and output formatting, demonstrating fundamental operations for displaying linked list contents.

# Given a linked list, print all the elements of the linked list separated by space. This is a fundamental operation in linked list manipulation and serves as the building block for more complex linked list algorithms. Understanding how to properly traverse and display linked list contents is essential for debugging and data visualization in real-world applications.

# This teaches basic linked list traversal and output formatting techniques that are essential for linked list debugging and data presentation.

# Your task: Traverse and print all elements of a linked list in the correct order with proper spacing.

# Examples
# Input:

# LinkedList: 1 -> 2
# Output:

# 1 2
# Input:

# Linked List: 49 -> 10 -> 30
# Output:

# 49 10 30
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def print_linked_list(head):
    current = head
    while current:
        print(current.val, end=" ")
        current = current.next
    print()

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