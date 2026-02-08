Your task: Implement insertion sort using the card-sorting approach.

def insertion_sort(numbers):
    for i in range(1, len(numbers)):
        current = numbers[i]
        j = i - 1
        while j >= 0 and numbers[j] > current:
            numbers[j + 1] = numbers[j]
            j -= 1
        numbers[j + 1] = current
    return numbers

def get_user_input():
    user_input = input("Enter numbers separated by spaces: ").strip()
    
    if not user_input or user_input.isspace():
        print("You didn't enter any valid numbers.")
        return None

    try:
        str_list = [s for s in user_input.split() if s.strip() != '']
        if len(str_list) == 0:
            print("No valid numbers found.")
            return None
        number_list = [int(num) for num in str_list]
        return number_list
    except ValueError:
        print("Invalid input. Please enter only whole numbers.")
        return None

def main():
    print("Welcome to the Insertion Sort Program!")

    while True:
        user_numbers = get_user_input()
        if user_numbers is not None:
            break

    if len(user_numbers) == 0:
        print("List is empty. Nothing to sort.")
    elif len(user_numbers) == 1:
        print(f"Only one number given. Already sorted: {user_numbers}")
    else:
        print(f"Original list: {user_numbers}")
        sorted_list = insertion_sort(user_numbers)
        print(f"Sorted list in ascending order: {sorted_list}")

main()
