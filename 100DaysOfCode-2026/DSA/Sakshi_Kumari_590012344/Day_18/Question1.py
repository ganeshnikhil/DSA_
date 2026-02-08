def selection_sort(numbers):
    length = len(numbers)
    for i in range(length - 1):
        min_index = i
        for j in range(i + 1, length):
            if numbers[j] < numbers[min_index]:
                min_index = j
        numbers[i], numbers[min_index] = numbers[min_index], numbers[i]
    return numbers

def get_user_numbers():
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
    print("Welcome to the Selection Sort Program!")

    while True:
        user_numbers = get_user_numbers()
        if user_numbers is not None:
            break
    if len(user_numbers) == 0:
        print("List is empty. Nothing to sort.")
    elif len(user_numbers) == 1:
        print(f"Only one number given. Already sorted: {user_numbers}")
    else:
        print(f"Original list: {user_numbers}")
        sorted_list = selection_sort(user_numbers)
        print(f"Sorted list in ascending order: {sorted_list}")
main()
