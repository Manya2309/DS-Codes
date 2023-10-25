#include <stdio.h>

void linearSearch(int arr[], int size, int key) {
    int occurrences = 0;

    printf("%d found at positions: ", key);
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            occurrences++;
            printf("%d ", i);
        }
    }

    if (occurrences == 0) {
        printf("None");
    }

    printf("\n");
}

int main() {
    int n,key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    linearSearch(arr,n,key);

    return 0;
}
