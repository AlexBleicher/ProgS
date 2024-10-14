#include "insertionsortAlgo.h"
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
