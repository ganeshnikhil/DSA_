def reverse_string(s):
    return s[::-1]


input_string = input("Enter a string: ")
reversed_string = reverse_string(input_string)
print(f"Reversed string: \"{reversed_string}\"")
