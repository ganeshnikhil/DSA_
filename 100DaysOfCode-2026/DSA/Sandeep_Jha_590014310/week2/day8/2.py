def count_char(str,char):
    freq_count = {}
    for c in str:
        freq_count[c] = freq_count.get(c,0) +1

    if char in freq_count:
        print(freq_count[char])
    else:
        print(0)
    

count_char("Programming","r") #2
count_char("Hello World","l") #3