#include <stdio.h>

int* sortArray(int *arr, int size) {
    for (int *i = arr; i < arr + size - 1; i++) {
        for (int *j = i + 1; j < arr + size; j++) {
            if (*i > *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
    return arr;
}

int main() {
    int arr[] = {7, 4, 9, 1, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
    int* sortedArr = sortArray(arr, size);
    printf("Mang sau khi sap xep: ");
    for (int *ptr = sortedArr; ptr < sortedArr + size; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
    return 0;
}

