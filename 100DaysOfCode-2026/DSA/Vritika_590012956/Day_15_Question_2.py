def sort_by_length(strings):
    return sorted(strings, key=len)  # sort by string length

user_input = input("Enter strings separated by commas: ")

string_list = [s.strip() for s in user_input.split(',')]

sorted_list = sort_by_length(string_list)
print("Sorted by length:", sorted_list)
