#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
    int *ptr1 = &x;
    int *ptr2 = &y;
    printf("x = %d, y = %d\n", x, y);
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

