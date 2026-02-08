#prompt the user to enter the unsorted array.
My_array = list(map(int,input("Enter the elements(Give space between them): ").strip().split()))
n = len(My_array) # n: Lenght of my array

for i in range(n):
    min_index = i
    for j in range(i+1,n):
        if My_array[j] < My_array[min_index]:
            min_index = j
    My_array[i] , My_array[min_index] = My_array[min_index] , My_array[i]

print(My_array)
    