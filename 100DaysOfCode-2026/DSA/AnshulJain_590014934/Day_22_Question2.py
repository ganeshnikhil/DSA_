class ListNode:
    def __init__(self, val=0):
        self.val = val
        self.next = None
def create_linked_list(values):
    head = ListNode(values[0])
    current = head
    for v in values[1:]:
        current.next = ListNode(v)
        current = current.next
    return head
def count_occurrences(head, key):
    count = 0
    current = head
    while current:
        if current.val == key:
            count += 1
        current = current.next
    return count
values = list(map(int, input().split()))#Taking input from the user
key = int(input())
head = create_linked_list(values)
print(count_occurrences(head, key))
# for example:-
#     input:1 2 1 2 1 2 1
#     key:1
#     output:4