no = list(map(int, input().split())) #taking input from the user 
target = int(input())

def linear_search(no, target):
    for i in range(len(no)):
        if no[i] == target:
            return i
    return -1
print(linear_search(no, target))
# Example usage
# input:- no= [10,20,30,40,50] and target=30
#output:- 2