def bubble_sort(arr):
    n = len(arr)
    for p in range(n - 1):                 # pass number
        swapped = False
        for j in range(n - 1 - p):         # the last p items are already in place
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:                    # no swaps: already sorted
            break
    return arr

print(bubble_sort([38, 27, 43, 3, 9, 82, 10]))   # [3, 9, 10, 27, 38, 43, 82]