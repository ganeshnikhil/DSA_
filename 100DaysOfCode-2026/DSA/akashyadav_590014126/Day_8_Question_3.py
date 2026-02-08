def reverse_string(text):
    return text[::-1]  # Slicing the text entered by the user with -1 step which reverses the string

input_string = input("Enter a string: ")#taking the string as the input by the user
reversed_string = reverse_string(input_string)#performing the reverse function on the input string
print("Reversed string:", reversed_string)#printing the reversed string