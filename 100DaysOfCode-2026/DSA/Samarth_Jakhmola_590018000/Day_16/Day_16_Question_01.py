def linear_search(array, target):
    for i in range(len(array)):
        if target == array[i]:
            return i
    
    return -1
        
while True:
    try:
        array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
        target = int(input("Enter the element to be searched : "))
        print(linear_search(array, target))
        break
    except:
            print("Invalid input. Plesae provide a valid input.")
