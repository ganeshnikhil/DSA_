# 3. Find Maximum Element
def find_max(l):
    max = l[0]
    for i in l:
        if i>max:
            max = i
    return max

nums_array = list(map(int,input("Enter the array elemnts seperated by space: ").split()))
print(find_max(nums_array))