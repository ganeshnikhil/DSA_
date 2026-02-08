def count_palindromic_substrings(s):
    if not s:
        return 0
    
    count = 0
    
    def expand_around_center(left, right):
        nonlocal count
        while left >= 0 and right < len(s) and s[left] == s[right]:
            count += 1
            left -= 1
            right += 1
    
    for i in range(len(s)):
     
        expand_around_center(i, i)
       
        expand_around_center(i, i + 1)
    
    return count

test_str = "abc"
print(f'Total palindromic substrings in "{test_str}": {count_palindromic_substrings(test_str)}')  

test_str2 = "aaa"
print(f'Total palindromic substrings in "{test_str2}": {count_palindromic_substrings(test_str2)}')  
