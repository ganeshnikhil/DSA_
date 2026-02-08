def first_occurrence(a, t):
    l, r, res = 0, len(a) - 1, 0
    while l <= r:
        m = (l + r) // 2
        if a[m] == t:
            res, r = m, m - 1
        elif a[m] < t:
            l = m + 1
        else:
            r = m - 1
    return res if a[res] == t else 0
a = list(map(int, input().split()))
t = int(input())
print(first_occurrence(a, t))
# for example
# Input: 1 2 3 4 5
# target is 3
# Output: 2
