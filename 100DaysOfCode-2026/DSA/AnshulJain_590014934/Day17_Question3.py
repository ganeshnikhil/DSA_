def int_sqrt(n):
    l, r, res = 0, n, 0
    while l <= r:
        m = (l + r) // 2
        if m * m <= n:
            res = m
            l = m + 1
        else:
            r = m - 1
    return res
n = int(input())
print(int_sqrt(n))
#for example
# Input: 16
# Output: 4
