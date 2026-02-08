# Prompt the user to enter the string
user_str = input("Enter the string: ").strip().lower().replace(" ", "")

# Function to find all substrings and the longest palindrome substring
def sub_strings(string):
    # Generate all substrings
    substrings = []
    for i in range(len(string)):
        for j in range(i + 1, len(string) + 1):
            substrings.append(string[i:j])
    
    print("All substrings:", substrings)
    
    # Find all palindromic substrings
    palindrome_substrings = [word for word in substrings if word == word[::-1]]
    print("Palindromic substrings:", palindrome_substrings)
    
    # Find the longest palindrome substring
    if palindrome_substrings:
        longest_palindrome = max(palindrome_substrings, key=len)
        print("Longest palindrome substring:", longest_palindrome)
    else:
        print("No palindromic substrings found.")

# Call the function with the user's input
sub_strings(user_str)