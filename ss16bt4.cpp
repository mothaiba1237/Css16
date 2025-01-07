#include <stdio.h>

int a(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    return size;
}

int main() {
    int array[] = {1, 3, 5, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);
    a(array, size);
    return 0;
}

