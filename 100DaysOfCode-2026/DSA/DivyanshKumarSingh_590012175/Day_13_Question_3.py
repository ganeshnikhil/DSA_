def reverseWords(s):
    if not s:
        print("Can't be reversed.")
    
    words=s.strip().split()
    rs = ' '.join(words[::-1])

    print("Reversed String: ",rs)

inp = input("Enter a string: ")
reverseWords(inp)