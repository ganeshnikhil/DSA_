def count_occurrences(arr, target):
    return arr.count(target)

arr = list(map(int, input("Enter array elements: ").split()))
target = int(input("Enter the target number to count: "))
count = count_occurrences(arr, target)
print(f"{target} occurred {count} time(s).")
