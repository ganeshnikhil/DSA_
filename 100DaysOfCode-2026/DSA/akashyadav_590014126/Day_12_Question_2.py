def removes_duplicate(s: str) -> str:
    seen = set()    # set to contain characters 
    result = []
    for char in s:
        if char not in seen:
            seen.add(char)  # adds the unseen characters
            result.append(char)
    return ''.join(result)
