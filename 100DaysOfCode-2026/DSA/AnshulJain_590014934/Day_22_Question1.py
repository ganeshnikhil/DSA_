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
def find_middle_node(head):
    slow = head
    fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
    return slow
values = list(map(int, input().split())) #taking input from the user 
head = create_linked_list(values)
middle = find_middle_node(head)
print(middle.val)
# for example :-
#     input:1 2 3 4 5
#     output:3