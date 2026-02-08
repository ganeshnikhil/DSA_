def function(input_str):
    freq = {}

 
    for ch in input_str:
        freq[ch] = freq.get(ch, 0) + 1

    for ch in input_str:
        if freq[ch] == 1:
            return ch

    return -1  


text = input("Enter a string: ")
result = function(text)

print(f"First non-repeating character: {result}")