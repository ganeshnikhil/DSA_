class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class Linked_List:

    def __init__(self):
        self.head = None
    
    def insertion(self,value):
        New_Node = Node(value)
        if self.head is None:
            self.head = New_Node
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = New_Node
    
    def traversing(self):
        if self.head is None:
            print("List is empty")
            return
        current = self.head
        while current:
            print(f"{current.data} -> ",end="")
            current = current.next
        print("NULL")
        
    def frequency_count(self,key):
        count = 0
        if self.head is None:
            print("List is empty")
            return count
        current_Node = self.head
        while current_Node:
            if current_Node.data == key:
                count += 1
            current_Node = current_Node.next
        print(f"The occurrences of a specific key in a linked list: {count}")

def main():
    My_Linked_List = Linked_List()

    while True:
        try:
            data = int(input("Enter data to insert into Linked List: "))
            My_Linked_List.insertion(data)
        except ValueError:
            print("Enter the correct input!")
            continue

        choice = input("Do you want to insert more data? (yes/no): ").strip().lower()
        if choice not in ['yes', 'y']:
            break

    print("\nThe Linked list is:")
    My_Linked_List.traversing()

    key = int(input("Enter the element you want count: "))

    My_Linked_List.frequency_count(key)

if __name__ == "__main__":
    main()

         
    

