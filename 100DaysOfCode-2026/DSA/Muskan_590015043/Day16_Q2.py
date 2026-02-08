# 2. Count Occurrences

nums_array = list(map(int,input("Enter the array elemnts seperated by space: ").split()))
target = int(input("Enter the element to search: "))
count = 0
for i in nums_array:
    if i == target:
        count+=1
print(count)