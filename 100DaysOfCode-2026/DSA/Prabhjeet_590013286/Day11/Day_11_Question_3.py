def count_palindromic_substrings(s):
    count = 0
    
    for center in range(len(s)):
        count += expand_around_center(s, center, center)
        count += expand_around_center(s, center, center + 1)
    return count

def expand_around_center(s, left, right):
    total = 0
    while left >= 0 and right < len(s) and s[left] == s[right]:
        total += 1
        left -= 1
        right += 1
    return total