def count_occurences(array, target):
    count = 0
    for i in range(len(array)):
          if target == array[i]:
               count += 1
    
    return count
    
while True:
    try:
        array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
        target = int(input("Enter the element whose frequency is to be counted : "))
        print(count_occurences(array, target))
        break
    except:
            print("Invalid input. Plesae provide a valid input.")
