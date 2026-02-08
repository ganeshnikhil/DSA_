Your task: Compress strings using character count encoding with size optimization.

def compress(text):
    if text == "":
        return text

    new_text = ""
    count = 1

    for i in range(1, len(text)):
        if text[i] == text[i - 1]:
            count += 1
        else:
            new_text += text[i - 1] + str(count)
            count = 1

    new_text += text[-1] + str(count)

    if len(new_text) < len(text):
        return new_text
    else:
        return text

print("String Compression")
user_input = input("Enter any string: ")
final_output = compress(user_input)
print("Compressed string is:", final_output)

