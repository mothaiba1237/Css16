#include <stdio.h>

int sum(int *a, int *b, int *result) {
    *result = *a + *b;
    return *result;
}

int main() {
    int x = 2;
    int y = 22;
    int result;
    sum(&x, &y, &result);
    printf("Tong cua %d va %d la: %d\n", x, y, result);
    return 0;
}

