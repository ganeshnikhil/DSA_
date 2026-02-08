def find_kth_largest():
    arr = list(map(int, input("Enter the array elements separated by space: ").split()))
    k = int(input("Enter the value of K: "))

    # Sort in descending order
    arr.sort(reverse=True)

    print(f"The {k}th largest element is: {arr[k - 1]}")
find_kth_largest()
