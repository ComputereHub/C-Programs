#include <stdio.h>

// Pointer के द्वारा value बदलने वाला Function
void changeValue(int *num) {

    // Original value बदलें
    *num = 100;
}

int main() {
    int number = 10;

    // Address pass करें
    changeValue(&number);

    printf("Updated Value = %d", number);

    return 0;
}
