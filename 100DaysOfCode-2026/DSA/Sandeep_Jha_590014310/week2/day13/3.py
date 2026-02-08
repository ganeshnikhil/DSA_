def rev_str(s):
    return ' '.join(s.split()[::-1])

print(rev_str(s=input("Enter a string: ")))