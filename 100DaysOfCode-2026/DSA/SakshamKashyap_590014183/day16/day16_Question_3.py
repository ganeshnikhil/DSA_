#prompt the user to enter the elements of array

my_array = list(map(int, input("Enter the elements (give space between every element): ").strip().split()))

largest_num = my_array[0]

for i in range(len(my_array)):
    if my_array[i] > largest_num:
        largest_num = my_array[i]

print(f"The largest element in array is: {largest_num} ")


