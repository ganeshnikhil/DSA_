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
def print_linked_list(head):
    current = head
    while current:
        print(current.val, end=" " if current.next else "")
        current = current.next
values = list(map(int, input().split()))
head = create_linked_list(values)
print_linked_list(head)
