def nonRepeat(s):
    freq_count = {}
    
    for c in s:
        freq_count[c] = freq_count.get(c,0) + 1
    
    for k,v in freq_count.items():
        if v==1:
            return k
        else:
            return -1
        
print(nonRepeat(s=input("enter your word: ")))
#input = hello -> output = h
#input = yoyo -> output = -1