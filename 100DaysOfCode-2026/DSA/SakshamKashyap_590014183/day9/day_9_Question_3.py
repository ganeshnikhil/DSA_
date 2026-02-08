#prompt the user to enter the string

User_str = input("Enter the string: ").strip().lower()

Unique_word = {}

for word in User_str:
    if word.isalpha():

        if word in Unique_word:
            Unique_word[word] += 1
        else:
            Unique_word[word] = 1
           
for key,value in Unique_word.items():
    if value == 1 :
        print(key)
        break
else:
    print("-1")
    
    
