#function to find the peek element
def peek_elemets_list(arr):
    n = len(arr)
    if n == 0 :
        print("Array is empty!")
    peek_elemet = []
    for i in range(n):
        if i == 0 and arr[i] > arr[i+1]:
            peek_elemet.append(arr[i])
        elif arr[i-1] < arr[i] > arr[i+1]:
            peek_elemet.append(arr[i])
        elif i == n -1 and arr[i-1] < arr[i]:
            peek_elemet.append(arr[i])
    if len(peek_elemet) == 0:
        print("no peek element find!")
    return peek_elemet

#prompt the user to enter the element of array

My_array = list(map(int,input("Enter the element(Give space between them): ").strip().split()))

result_list = peek_elemets_list(My_array)

max_peek_element = max(result_list)

peek_index = My_array.index(max_peek_element)

print("Index of peek element is: ",peek_index)







