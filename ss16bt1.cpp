#include <stdio.h>

int main() {
    int n = 1234;
    int *ptr = &n;

    printf("gia tri (cach 1): %d\n", n);
    printf("dia chi (cach 1): %p\n", &n);
    printf("gia tri (cach 2): %d\n", *ptr);
    printf("dia chi (cach 2): %p\n", ptr);
    return 0;
}


