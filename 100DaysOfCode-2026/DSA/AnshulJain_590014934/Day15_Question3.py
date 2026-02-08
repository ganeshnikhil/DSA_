a = list(map(int, input().strip("[]").split(',')))
f = 1
while f:
    f = 0
    for i in range(len(a)-1):
        if a[i] > a[i+1]:
            a[i], a[i+1] = a[i+1], a[i]
            f = 1
print(a)
# Taking input from the user 
# For example: Input: [5, 3, 8, 1, 2, 7]
# Output: [1, 2, 3, 5, 7, 8]