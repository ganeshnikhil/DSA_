#prompt the user to enter the string1 and string2
def sorted_array(array):
    n = len(array)
    for i in range(n-1):
        swapped = False
        for j in range(n-i-1):
            if array[j] > array[j+1]:
                array[j] , array[j+1] = array[j+1] , array[j]
                swapped = True
        if not swapped:
            break
    print(array)

#prompt the user to enter the array 1

array_1 = list(map(int,input("Enter the element of string 1(Give Space between them): ").strip().split()))

#prompt the user to enter the string 2

array_2 = list(map(int,input("Enter the element of string 2(Give Space between them): ").strip().split()))

print("Your sorted string 1 is: ")
sorted_array(array_1)

print("Your sorted string 2 is: ")
sorted_array(array_2)

for num in array_2:
    array_1.append(num)

print(f"Final sorted array is: {array_1}")


    