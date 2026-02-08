class Node:
    def __init__(self,data,node_next=None):
        self.data = data
        self.next = node_next
n = int(input("Enter the number of nodes: "))
head = None
current= None
for i in range(n):
    val = int(input(f"Enter the data for the {i+1} node: "))
    new_node = Node(val)
    if head is None:
        head = new_node
        current = new_node
    else:
        current.next = new_node
        current =new_node
p =head
while p is not None:
    print(p.data,end =' ')
    p = p.next
