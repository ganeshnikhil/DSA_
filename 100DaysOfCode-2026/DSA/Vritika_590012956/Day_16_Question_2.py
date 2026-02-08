user_input = input("Enter integers separated by spaces: ")
arr = list(map(int, user_input.split()))

target = int(input("Enter the target number to count: "))

count = 0

# count target occurrences
for num in arr:
    if num == target:
        count += 1

print(f"The number {target} appears {count} times in the array.")
