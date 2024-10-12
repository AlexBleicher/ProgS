#include <iostream>
#include <ostream>
#include<array>

void printArray(int arr[], int len) {
    std::cout << "Array: [";
    for (int i = 0; i < len - 1; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[len - 1] << "]" << std::endl;
}

int* insertionSort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        int elem = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > elem) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = elem;
    }
    return arr;
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
