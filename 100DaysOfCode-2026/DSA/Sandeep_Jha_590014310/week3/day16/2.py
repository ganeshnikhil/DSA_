def sort_str(strArr):
    return sorted(strArr, key=len)

arr = list(map(int, input("Enter your array (space-separated): ").split()))
print(sort_str(arr))