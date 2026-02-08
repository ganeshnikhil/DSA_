def first_non_repeating(s):
    char_count = {}

    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for index, char in enumerate(s):
        if char_count[char] == 1:
            return index
    return -1

if __name__ == "__main__":
    test_cases = ["aabbcdde", "abcabc", "aabb", "xxyz", "", "a"]
    for test in test_cases:
        print(f"Input: '{test}' --> First non-repeating index: {first_non_repeating(test)}")
