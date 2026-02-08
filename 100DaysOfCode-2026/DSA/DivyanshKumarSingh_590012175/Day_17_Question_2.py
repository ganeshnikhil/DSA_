def first(a, t):
    l, r, res = 0, len(a) - 1, -1
    while l <= r:
        m = (l + r) // 2
        if a[m] == t:
            res = m
            r = m - 1
        elif a[m] < t:
            l = m + 1
        else:
            r = m - 1
    return res

n = int(input())
a = list(map(int, input().split()))
t = int(input())
print(first(a, t))