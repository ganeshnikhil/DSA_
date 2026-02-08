# Bubble Sort Implementation
nums = list(map(int,input("Enter the array elemnts seperated by space: ").split()))
def bubble_sort(l):
    last = l[len(l) - 1]  
    for i in range(len(l) - 1, 0, -1):
        if l[i]<l[i-1]:
            l[i],l[i-1] = l[i - 1],l[i]
bubble_sort(nums)
print(nums)