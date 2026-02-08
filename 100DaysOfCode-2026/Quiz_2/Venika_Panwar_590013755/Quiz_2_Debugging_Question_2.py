#2.  A student implemented the "First Non-Repeating Character" algorithm but it's giving wrong results:
'''
def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in char_count: # Line A
        if char_count[char] == 1:
            return s.index(char) # Line B
    return -1

Tasks:
1. Identify the bug in the algorithm
2. Explain why the current approach gives incorrect results
3. Provide the corrected implementation'''


#Answer:

#Issue in the code according to me:
'''
This code tries to find the first non-repeating character in a string, 
but it uses a dictionary (which doesn't guarantee the order of keys). That means:

The counting step is fine.

But during the second loop, it iterates in dictionary order, 
which may not match the order of characters in the string.'''


#Explanation of the issue:
'''Explanation:
The dictionary stores characters with their counts, but during iteration, 
it does not always follow the order of appearance. 
Also, using s.index(char) may return incorrect positions if characters are repeated.'''



#Basically, what is happening is:
'''
1. The bug is in the second loop that iterates over the dictionary.
2. It fails because the dictionary may not maintain input order.
3. We fixed it using a manual list to count frequency and then scanned the original string in order.'''


#Corrected Implementation:
def first_non_repeating(s):
    # Step 1: Count character frequencies manually
    freq = []  # list of [char, count]
    for i in range(len(s)):
        found = False
        for j in range(len(freq)):
            if freq[j][0] == s[i]:
                freq[j][1] += 1
                found = True
                break
        if not found:
            freq.append([s[i], 1])
    
    # Step 2: Find first character in original string with frequency = 1
    for i in range(len(s)):
        for j in range(len(freq)):
            if freq[j][0] == s[i] and freq[j][1] == 1:
                return i
    return -1

# User Input
user_string = input("Enter a string to find the index of first non-repeating character: ")
index = first_non_repeating(user_string)

# Output Result
if index != -1:
    print("First non-repeating character is:", user_string[index], "at index", index)
else:
    print("No non-repeating character found.")

# This code will correctly find the first non-repeating character in the input string.
