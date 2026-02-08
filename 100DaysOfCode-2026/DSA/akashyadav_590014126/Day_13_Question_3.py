def reverse_words(s):

    words = s.strip().split()   # splitting words according to white spaces
    
    reversed_words = words[::-1]    # reversing the string
    
    return ' '.join(reversed_words) # joining the string according to the reversed list

#example
print(reverse_words("  The   quick brown   fox  "))  # "fox brown quick The"