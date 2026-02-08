#prompt the user to enter the array

My_array = list(map(int,input("Enter the element(Give space between them and element should be only three distinct): ").strip().split()))
n =len(My_array)
low = 0
mid = 0
high = n -1 
while mid <= high:
    if My_array[mid] == 0:
        My_array[low],My_array[mid] = My_array[mid] , My_array[low]
        low +=1
        mid += 1
    elif My_array[mid] == 1:
        mid += 1
    else: # My_array[mid] == 2
        My_array[high],My_array[mid] = My_array[mid], My_array[high]
        high -= 1
print(My_array)

    
