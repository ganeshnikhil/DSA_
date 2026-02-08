Your task: Sort three colors efficiently using single-pass three-way partitioning
def sort_colors(arr):
    low = 0
    mid = 0
    high = len(arr) - 1

    while mid <= high:
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == 1:
            mid += 1
        else:  # arr[mid] == 2
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1
    return arr

def get_user_input():
    user_input = input("Enter numbers (0, 1, 2 only), separated by spaces: ").strip()

    if not user_input or user_input.isspace():
        print("You didn't enter any valid input.")
        return None

    try:
        str_list = [s for s in user_input.split() if s.strip() != '']
        if len(str_list) == 0:
            print("No valid numbers found.")
            return None
        number_list = [int(num) for num in str_list]
        if any(num not in (0, 1, 2) for num in number_list):
            print("Only the numbers 0, 1, and 2 are allowed.")
            return None
        return number_list
    except ValueError:
        print("Invalid input. Please enter only whole numbers (0, 1, or 2).")
        return None
def main():
    print("Welcome to the Dutch National Flag Sort Program!")
    while True:
        arr = get_user_input()
        if arr is not None:
            break
    if len(arr) == 0:
        print("The array is empty. Nothing to sort.")
    elif len(arr) == 1:
        print(f"Only one element. Already sorted: {arr}")
    else:
        print(f"Original array: {arr}")
        sorted_arr = sort_colors(arr)
        print(f"Sorted array: {sorted_arr}")

main()
