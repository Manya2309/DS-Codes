#include <stdio.h>

int recursiveLinearSearch(int arr[], int key, int index, int size) {
    if (index >= size) {
        return -1;  
    }
    if (arr[index] == key) {
        return index;  
    }
    return recursiveLinearSearch(arr, key, index + 1, size);
}

int main() {
    int arr[] = {13, 45, 23, 77, 98, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 77;

    int result = recursiveLinearSearch(arr, key, 0, size);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
