def countWords(s):
    s = s.strip()

    if not s:
        return 0, 'NULL', 0
    
    words = s.split()
    m1 = 0
    longestWord = ''

    for w in words:
        if len(w) > m1:
            m1 = len(w)
            longestWord = w

    return len(words), longestWord, m1


inp = input("Enter a string: ").strip('"')

WordCount, longestWord, lengthOfLongestWord = countWords(inp)

print(f"Word Count: {WordCount}")
print(f"Longest Word: \"{longestWord}\"")
print(f"Length of Longest Word: {lengthO
