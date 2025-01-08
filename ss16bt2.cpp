#include <stdio.h>

int swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return 0;
}

int main() {
    int x = 1;
    int y = 2;
    int *ptr1 = &x;
    int *ptr2 = &y;
    printf("x = %d, y = %d\n", x, y);
    swap(ptr1, ptr2);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

