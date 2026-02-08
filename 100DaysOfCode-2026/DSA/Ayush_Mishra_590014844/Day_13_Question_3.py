def reverse_words(s):
    words = s.strip().split()
    return ' '.join(reversed(words))

# Example usage
print(reverse_words("  Java Python C++  "))  # C++ Python Java
