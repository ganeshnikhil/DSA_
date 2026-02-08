def remove_duplicate_characters(string):
    compressed_string = ""
    count = 1

    for i in range(1, len(string)):
            if string[i] == string[i - 1]:
                count += 1
            else:

                compressed_string += string[i - 1] + str(count)
                count = 1

    compressed_string += string[-1] + str(count)    

    return compressed_string if len(compressed_string) <= len(string) else string

string = input("Enter a string : ")
print(f"\"{remove_duplicate_characters(string)}\"")
