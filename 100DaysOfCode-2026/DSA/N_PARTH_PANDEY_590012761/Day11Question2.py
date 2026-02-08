def longest_palindrome(s: str) -> str:
    if not s:
        return ""
    
    start = 0
    end = 0
    
    for i in range(len(s)):
        len1 = expand_around_center(s, i, i)  
        len2 = expand_around_center(s, i, i + 1)  
        max_len = max(len1, len2)
        if max_len > end - start:
            start = i - (max_len - 1) // 2
            end = i + max_len // 2
    
    return s[start:end + 1]

def expand_around_center(s: str, left: int, right: int) -> int:
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1
    return right - left - 1
sample_input = "babad"
sample_output = longest_palindrome(sample_input)
print(f"Input: {sample_input}")
print(f"Output: {sample_output}")