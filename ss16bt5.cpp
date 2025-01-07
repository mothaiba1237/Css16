#include <stdio.h>

int* upd(int a[], int n, int v, int p) {
    if (p >= 0 && p < n) a[p] = v;
    return a;
}

int main() {
    int a[] = {1, 3, 5, 7, 9}, n = sizeof(a) / sizeof(a[0]);
    printf("Truoc: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    int* b = upd(a, n, 33, 2);
    printf("Sau: ");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}

