import random
def insertionsort(arr):
    for i in range(2, len(arr)):
        elem = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > elem:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = elem
    return arr

def sortRandomArray():
    randomArray = [random.randint(1,100) for i in range(10)]
    print("Array to sort: ", randomArray)
    sortedArray = insertionsort(randomArray)
    print("Array after sorting: ",sortedArray)

sortRandomArray()