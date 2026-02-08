class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linked_list:
    def __init__(self):
        self.head = None

    def insertion(self, value):
        new_node = Node(value)
        if self.head is None:
            self.head = new_node
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = new_node        

    def traversing(self):
        if self.head is None:
            print("List is empty")
            return
        current_Node = self.head
        while current_Node:
            print(f"{current_Node.data} -> ", end="")
            current_Node = current_Node.next
        print("NULL")

    def Find_middle(self):
        if self.head is None:
            print("List is Empty")
            return None
        slow = self.head
        fast = self.head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        print(f"The middle element of linked list is: {slow.data}")

def main():
    My_Linked_List = linked_list()
    
    while True:
        try:
            data = int(input("Enter data to insert into Linked List: "))
            My_Linked_List.insertion(data)
        except ValueError:
            print("Invalid input. Please enter an integer.")
            continue
        
        choice = input("Do you want to insert more data? (yes/no): ").strip().lower()
        if choice not in ['yes', 'y']:
            break

    print("\nYour Linked List is:")
    My_Linked_List.traversing()
    My_Linked_List.Find_middle()

if __name__ == "__main__":
    main()
