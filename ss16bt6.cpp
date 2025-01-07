#include <stdio.h>

int search(int *arr, int size, int value) {
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        if (*ptr == value) {
            return ptr - arr;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;
    int position = search(arr, size, value);
    printf("Vi tri cua gia tri %d la: %d\n", value, position);
    return 0;
}

