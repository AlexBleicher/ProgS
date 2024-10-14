#include <iostream>
#include <ostream>

#include "insertionsortAlgo.h"

void printArray(int arr[], int len) {
    std::cout << "Array: [";
    for (int i = 0; i < len - 1; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[len - 1] << "]" << std::endl;
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    printArray(arr, 10);
    int* sortedArray = insertionSort(arr, 10);
    printArray(sortedArray, 10);
    return 1;
}