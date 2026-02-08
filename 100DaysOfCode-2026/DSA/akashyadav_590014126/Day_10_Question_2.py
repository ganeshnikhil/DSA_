def clean_spaces(text):

    remove_all = text.replace(" ", "")  #removing spaces
    
    trimmed = text.strip()  #trimming the leading and trailing spaces
    
    single_spaced = ' '.join(text.split())  #removing the extra spaces in the word

    return remove_all, trimmed, single_spaced

#Example
text = "  hello   world  "
all_removed, trimmed, singles = clean_spaces(text)
print("Remove all:", all_removed)
print("Trim:", trimmed)
print("Single spaces:", singles)
