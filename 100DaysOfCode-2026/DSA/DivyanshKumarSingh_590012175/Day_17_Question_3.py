n = int(input())

def sq(n):
    l, r, ans = 0, n, 0
    while l <= r:
        m = (l + r) // 2
        if m * m <= n:
            ans = m
            l = m + 1
        else:
            r = m - 1
    return ans

print(sq(n))
