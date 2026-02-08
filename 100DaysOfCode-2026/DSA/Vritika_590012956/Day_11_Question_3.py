def count_palindromic_substrings(s):
    count = 0

    for i in range(len(s)):
        for j in range(i + 1, len(s) + 1):
            substring = s[i:j]
            if substring == substring[::-1]:
                count += 1
    return count
  
user_input = input("Enter a string: ")
total = count_palindromic_substrings(user_input)
print("Total palindromic substrings:", total)
