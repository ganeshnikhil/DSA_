# Count words and find the longest word while handling whitespace properly.

string=list(map(str,input("enter your string :").split()))
count=0
max=0
for word in string :
    count = count +1 
    if len(word)> max:
        max=len(word)
        longest_word= word

print (f" Word count: {count} , Longest word: {longest_word}")

