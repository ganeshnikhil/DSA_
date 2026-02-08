user_input = input("Enter integers separated by spaces: ")
arr = list(map(int, user_input.split()))
arr.sort()
print("Sorted array:", arr)
