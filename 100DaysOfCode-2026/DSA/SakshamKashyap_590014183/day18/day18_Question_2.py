#Insertion Sort 
#prompt the user to enter the array
My_array = list(map(int,input("Enter the element(Give space between them): ").strip().split()))
n =len(My_array)
for i in range(1,n):
    insert_index = i
    current_value = My_array.pop(i)
    for j in range(i-1,-1,-1):
        if My_array[j] > current_value:
            insert_index = j
    My_array.insert(insert_index,current_value)
print(My_array)

