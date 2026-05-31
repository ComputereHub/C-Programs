#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    // Pointer को array के पहले element पर रखें
    int *ptr = arr;

    // Pointer Arithmetic
    printf("%d\n", *ptr);

    ptr++;

    printf("%d\n", *ptr);

    return 0;
}
