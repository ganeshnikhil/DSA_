def sorting(arr):
    arr.sort()
    return arr

arr = list(map(int, input("Enter your array (space-separated): ").split()))
print(sorting(arr))