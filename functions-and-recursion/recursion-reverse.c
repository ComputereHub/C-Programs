#include <stdio.h>

// Number को Reverse करने वाला Recursive Function
void reverse(int num) {

    // Base Condition
    if(num == 0)
        return;

    // Last digit print करें
    printf("%d", num % 10);

    // Recursive Call
    reverse(num / 10);
}

int main() {
    int num;

    scanf("%d", &num);

    printf("Reverse = ");

    reverse(num);

    return 0;
}
