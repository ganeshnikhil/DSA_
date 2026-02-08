def sort_by_string_length(array):
    if len(array) == 0:
        return -1
    else:
        array.sort(key = len)
        return array
    
while True:
    array = input("Please enter the elements of the array you want to sort by their length," \
        " separated by spaces : ").strip()
    if array == "":
        print("Invalid input. Please provide a valid input.")
        continue

    array = list(array.split())

    if sort_by_string_length(array) == -1:
        print("Invalid input.")
    else:
        print("[" + ",".join(f'"{string}"' for string in array) + "]")
        break
