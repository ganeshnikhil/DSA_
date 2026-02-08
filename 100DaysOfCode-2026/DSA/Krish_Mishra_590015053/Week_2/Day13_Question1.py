user_input = input("Enter the string: ").strip().split()
word = len(user_input)
Longest_word = max(user_input,key=len)
print(f"Word count: {word}, Longest Word: {Longest_word} ")
