#include <stdio.h>

int* updateArray(int arr[], int size, int value, int position) {
    if (position >= 0 && position < size) arr[position] = value;
    return arr;
}

int main() {
    int numbers[] = {1, 3, 5, 7, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("truoc: ");
    for (int i = 0; i < size; i++) printf("%d ", numbers[i]);
    printf("\n");
    int* updatedArray = updateArray(numbers, size, 33, 2);
    printf("sau: ");
    for (int i = 0; i < size; i++) printf("%d ", updatedArray[i]);
    printf("\n");
    return 0;
}

