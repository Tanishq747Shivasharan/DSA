#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("x = %d\n", x);
    printf("ptr = %p\n", (void *)ptr);

    return 0;
}