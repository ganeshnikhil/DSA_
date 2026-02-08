#prompt the user to enter the array

my_array = list(map(int,input("Enter the element of array(Give Space Between them): ").strip().split()))

k = int(input("Enter the value of kth largest elements: "))



def find_kth_largest(list,k):
    max_list = []
    max_element = list[0]
    for i in range(k):
        for num in list:
            if num > max_element:
                max_element = num
        max_list.append(max_element)
        list.remove(max_element)
        max_element = list[0]
    return max_list

final_list = find_kth_largest(my_array,k)

print(final_list)

print(f"the {k}th largest element is: {final_list[-1]}")


