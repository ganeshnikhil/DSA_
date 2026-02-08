def remove_spaces(s):
    remove_all = s.replace(" ", "")
    trimmed = s.strip()
    single_spaced = ' '.join(s.strip().split())
    return remove_all, trimmed, single_spaced

# Example usage:
print(remove_spaces(" hello world "))  # Output: ('helloworld', 'hello world', 'hello world')
print(remove_spaces("programming is fun"))  # Output: ('programmingisfun', 'programming is fun', 'programming is fun')
print(remove_spaces(" a  b    c "))  # Output: ('abc', 'a  b    c', 'a b c')
