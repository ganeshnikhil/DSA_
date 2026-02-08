def function(input_str, target_char):
    count = input_str.count(target_char)
    print(f"Character '{target_char}' appears {count} time(s).")

string = input("Enter a string: ")
char = input("Enter the character to search for: ")

function(string, char)