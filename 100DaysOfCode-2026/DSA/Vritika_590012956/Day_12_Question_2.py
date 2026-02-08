s = input("Enter a string: ")

# Create an empty string to store result
result = ""

for char in s:
    if char not in result:
        result += char  # Add only if it's not already in result
      
print("String after removing duplicates:", result)
