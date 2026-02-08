arr = list(map(int, input().split()))# taking input from the user 
target = int(input())
def count_frequency(arr, target):
    count = 0
    for num in arr:
        if num == target:
            count += 1
    return count
print(count_frequency(arr, target))
#For Example 
# input:- arr=[1,2,2,6,5,2,3] and target:-2
#output is 3