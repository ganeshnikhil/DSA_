def dutch_flag_sort(colours):
    low = 0
    mid = 0
    high = len(colours) - 1

    while(mid <= high):
        if(colours[mid] == 0):
            colours[mid], colours[low] = colours[low], colours[mid]
            mid += 1
            low += 1
        elif(colours[mid] == 1):
            mid+=1
        else:
            colours[mid], colours[high] = colours[high], colours[mid]
            high -= 1
    return colours

#Fixed Input
print(dutch_flag_sort([2,0,2,1,1,0]))

#Custom Input
arr = list(int(x) for x in input("Enter the colours [0,1 and 2 only] : ").split())
print(dutch_flag_sort(arr))
