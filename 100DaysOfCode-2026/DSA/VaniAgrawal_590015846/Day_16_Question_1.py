# Implement linear search to find target element's index position.
arr = list(map(int, input("enter list :").split()))
target_element=int(input("enter no you want to search:"))
index=0
length= len(arr)
got_index=-1
while index <= length-1:
    if arr[index]==target_element:
        got_index=index
        break
    
    index=index+1
print(got_index)
