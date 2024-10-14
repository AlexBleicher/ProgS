import random
from insertionsortAlgo import *
def sortRandomArray():
    randomArray = [random.randint(1,100) for i in range(10)]
    print("Array to sort: ", randomArray)
    sortedArray = insertionsort(randomArray)
    print("Array after sorting: ",sortedArray)

sortRandomArray()