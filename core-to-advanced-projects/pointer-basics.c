#include <stdio.h>

int main() {

    int num = 10;

    // Pointer variable बनाएं
    int *ptr = &num;

    // Value और Address print करें
    printf("Value = %d\n", num);
    printf("Address = %p\n", &num);
    printf("Pointer Value = %d\n", *ptr);

    return 0;
}
