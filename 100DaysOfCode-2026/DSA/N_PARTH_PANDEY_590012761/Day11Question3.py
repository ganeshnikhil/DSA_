def count_palindromic_substrings(s: str) -> int:
    count = 0
    n = len(s)
    
    for i in range(n):
        
        left, right = i, i
        while left >= 0 and right < n and s[left] == s[right]:
            count += 1
            left -= 1
            right += 1
        
        
        left, right = i, i + 1
        while left >= 0 and right < n and s[left] == s[right]:
            count += 1
            left -= 1
            right += 1
    
    return count


sample_input = "abc"
sample_output = count_palindromic_substrings(sample_input)
print(f"Input: {sample_input}")
print(f"Output: {sample_output}")