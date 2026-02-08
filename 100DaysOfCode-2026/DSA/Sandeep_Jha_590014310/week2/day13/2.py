def check_palin(s):
    s = s.replace(" ", "").lower()
    
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    
    # Check if at most one character has odd frequency
    odd_count = 0
    for count in char_count.values():
        if count % 2 != 0:
            odd_count += 1
            if odd_count > 1:
                return False
    
    return True

print(check_palin(s=input("enter your string: ")))