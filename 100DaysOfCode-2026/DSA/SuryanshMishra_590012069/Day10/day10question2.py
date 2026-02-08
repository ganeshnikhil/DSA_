import re

def remove_all_spaces(text):
    """Remove all spaces from the string."""
    return text.replace(" ", "")


def trim_spaces(text):
    """Remove only leading and trailing spaces."""
    return text.strip()


def single_spaces(text):
    """Remove extra spaces between words, leaving only single spaces."""
    # First trim, then replace multiple spaces with single space
    return re.sub(r'\s+', ' ', text.strip())


def process_string(text):
    """Process string with all three space removal operations."""
    
    remove_all = remove_all_spaces(text)
    trim = trim_spaces(text)
    single = single_spaces(text)
    
    return {
        "remove_all": remove_all,
        "trim": trim,
        "single_spaces": single
    }


def demo_remove_spaces():
    """Demonstrate space removal with given examples."""
    
    print("REMOVE SPACES DEMO")
    print("=" * 40)
    
    # Test cases from the problem
    test_cases = [
        " hello world ",
        "programming is fun",
        " a   b   c "
    ]
    
    for text in test_cases:
        results = process_string(text)
        print(f'Input: "{text}"')
        print(f'Remove all: "{results["remove_all"]}"')
        print(f'Trim: "{results["trim"]}"')
        print(f'Single spaces: "{results["single_spaces"]}"')
        print("-" * 40)


def interactive_space_removal():
    """Interactive version for testing custom inputs."""
    
    print("\nINTERACTIVE SPACE REMOVAL")
    print("=" * 40)
    
    while True:
        text = input("Enter string (or 'quit' to exit): ")
        if text.lower() == 'quit':
            break
            
        results = process_string(text)
        print(f'Remove all: "{results["remove_all"]}"')
        print(f'Trim: "{results["trim"]}"')
        print(f'Single spaces: "{results["single_spaces"]}"')
        print("-" * 40)


if __name__ == "__main__":
    # Run demonstration with examples
    demo_remove_spaces()
    
    # Start interactive mode
    interactive_space_removal()