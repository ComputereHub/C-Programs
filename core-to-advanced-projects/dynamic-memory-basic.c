#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;

    // Dynamic Memory Allocate करें
    ptr = (int *)malloc(sizeof(int));

    *ptr = 100;

    printf("Value = %d", *ptr);

    // Memory Free करें
    free(ptr);

    return 0;
}
