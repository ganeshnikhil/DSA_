def rem_dupes(s):
    new = ""
    for c in s:
        if c not in new:
            new += c
    return new

print(rem_dupes(s=input("enter your word: ")))