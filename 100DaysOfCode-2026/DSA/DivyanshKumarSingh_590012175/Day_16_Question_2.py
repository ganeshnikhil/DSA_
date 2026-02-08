def countFrequency(arr, target):
    count = 0
    for num in arr:
        if num == target:
            count += 1
    return count

inp = input("Enter integers separated by spaces: ")
arr = list(map(int, inp.strip().split()))

target = int(input("Enter the target value to count: "))

freq = countFrequency(arr, target)

print(f"The target {target} appears {freq} time(s) in the array.")
