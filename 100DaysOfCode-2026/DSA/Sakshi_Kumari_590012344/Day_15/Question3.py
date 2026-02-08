Your task: Implement bubble sort algorithm from scratch without using built-in sorting 
functions.

print("This program will sort your numbers in ascending order using bubble sort.")
data = input("Enter numbers separated by spaces: ").strip()
if not data:
    print("You didn't enter anything.")
else:
    try:
        nums = list(map(int, data.split()))
        if len(nums) == 1:
            print("Only one number. Nothing to sort.")
        else:
            for i in range(len(nums)):
                for j in range(len(nums) - i - 1):
                    if nums[j] > nums[j + 1]:
                        nums[j], nums[j + 1] = nums[j + 1], nums[j]
            print("Sorted numbers:")
            print(nums)
    except:
        print("Please enter only valid numbers separated by spaces.")
