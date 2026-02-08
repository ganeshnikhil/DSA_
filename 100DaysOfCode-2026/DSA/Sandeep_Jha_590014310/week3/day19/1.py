#python has built in function for sorting
#sort()

def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i

        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]

    return arr

print(selection_sort(list(map(int,input("enter the elements space-separated: ").replace(",", "").split()))))