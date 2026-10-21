def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        
        while j >= 0 and arr[j] > key:   # shift larger elements right
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key                 # drop the key into the gap
    
    return arr

print(insertion_sort([38, 27, 43, 3, 9, 82, 10]))   # [3, 9, 10, 27, 38, 43, 82]