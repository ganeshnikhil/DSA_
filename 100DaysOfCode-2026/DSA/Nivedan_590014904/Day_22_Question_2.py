class Node:
    def __init__(self,data ,next_node=None ):
        self.data = data
        self.next = next_node
n = int(input("Enter the number of elements: "))
head = None
current = None
for i in range(n):
    val = int(input(f"Enter the value of the {i+1} node: "))
    new_node = Node(val)
    if head == None:
        head = new_node
        current = new_node
    else:
        current.next = new_node
        current = new_node
target = int(input("Target: "))
p = head
freq = 0
while p is not None:
    if p.data == target:
        freq+=1
    p = p.next
print(freq)
