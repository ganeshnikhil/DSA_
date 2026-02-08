def maximum_element(array):
    largest = array[0]
    for i in range(1, len(array)):
          if array[i] > largest:
               largest = array[i]
    
    return largest
    
while True:
    try:
        array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
        print(maximum_element(array))
        break
    except:
            print("Invalid input. Plesae provide a valid input.")
