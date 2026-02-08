def sort_by_length(strings):
    n = len(strings)
    for i in range(n):
        for j in range(n - 1 - i):
            if len(strings[j]) > len(strings[j + 1]):
                strings[j], strings[j + 1] = strings[j + 1], strings[j]
    return strings

# Example usage:
print(sort_by_length(["apple", "pie", "washington", "cat"]))
print(sort_by_length(["hello", "world", "a", "programming", "fun"]))
print(sort_by_length(["java", "python", "c", "javascript"]))
