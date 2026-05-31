#include <stdio.h>

// Call By Value Function
void changeValue(int num) {

    // केवल local copy बदलेगी
    num = 100;

    printf("Inside Function = %d\n", num);
}

int main() {
    int number = 10;

    // Function call करें
    changeValue(number);

    // Original value नहीं बदलेगी
    printf("Inside Main = %d", number);

    return 0;
}
